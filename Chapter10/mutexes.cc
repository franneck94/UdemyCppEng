#include <array>
#include <cstdint>
#include <iostream>
#include <mutex>
#include <numeric>
#include <thread>
#include <cassert>

constexpr static auto NUM_THREADS = std::uint32_t{20};
constexpr static auto NUM_INCREMENTS = std::uint32_t{100'000};

auto global_counter = std::int32_t{0};

void worker1(const std::int32_t input, std::int32_t &output)
{
    output = input * 2;

    for (std::uint32_t i = 0; i < NUM_INCREMENTS; ++i)
    {
        ++global_counter;
    }
}

auto mutex = std::mutex{};

void worker2(const std::int32_t input, std::int32_t &output)
{
    output = input * 2;

    auto local_counter = std::uint32_t{0U};

    for (std::uint32_t i = 0; i < NUM_INCREMENTS; ++i)
    {
        ++local_counter;
    }

    auto guard = std::lock_guard<std::mutex>{mutex};
    global_counter += local_counter;
}

int main()
{
    auto inputs = std::array<std::int32_t, NUM_THREADS>{};
    std::iota(inputs.begin(), inputs.end(), 0);
    auto outputs = std::array<std::int32_t, NUM_THREADS>{};
    std::fill(outputs.begin(), outputs.end(), 0);

    std::array<std::thread, NUM_THREADS> threads;
    for (std::uint32_t i = 0; i < NUM_THREADS; ++i)
    {
        threads[i] = std::thread(worker2, inputs[i], std::ref(outputs[i]));
    }

    // ...

    for (std::uint32_t i = 0; i < NUM_THREADS; ++i)
    {
        threads[i].join();
    }

    for (std::uint32_t i = 0; i < NUM_THREADS; ++i)
    {
        std::cout << "Outputs[" << i << "] = " << outputs[i] << '\n';
    }

    std::cout << "Global counter = " << global_counter << '\n';
    assert(global_counter == NUM_THREADS * NUM_INCREMENTS);

    return 0;
}
