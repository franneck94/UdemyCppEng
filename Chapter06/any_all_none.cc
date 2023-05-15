#include <chrono>
#include <cstdint>
#include <iostream>
#include <random>
#include <vector>

constexpr static auto NUM_ELEMENTS = size_t{3U};

std::int32_t gen()
{
    static auto seed = std::random_device{};
    static auto g = std::mt19937{seed()};
    static auto d = std::uniform_int_distribution<std::int32_t>{-10, 10};

    return d(g);
}

template <typename T>
void print_vector(const std::vector<T> &vec)
{
    for (const auto v : vec)
    {
        std::cout << v << '\n';
    }
    std::cout << '\n';
}

int main()
{
    auto my_vector = std::vector<std::int32_t>(NUM_ELEMENTS, 0U);
    std::generate(my_vector.begin(), my_vector.end(), gen);
    print_vector(my_vector);

    auto l = [](const auto val) { return (val > -5) && (val < 5); };
    const auto check1 = std::all_of(my_vector.begin(), my_vector.end(), l);
    const auto check2 = std::any_of(my_vector.begin(), my_vector.end(), l);
    const auto check3 = std::none_of(my_vector.begin(), my_vector.end(), l);

    std::cout << std::boolalpha << check1 << '\n';
    std::cout << std::boolalpha << check2 << '\n';
    std::cout << std::boolalpha << check3 << '\n';

    return 0;
}
