#include <algorithm>
#include <cstdint>
#include <iostream>
#include <numeric>
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

    std::transform(my_vector.begin(),
                   my_vector.end(),
                   my_vector.begin(),
                   [](const auto val) { return val * 2; });
    print_vector(my_vector);

    std::transform(my_vector.begin(),
                   my_vector.end(),
                   my_vector.begin(),
                   [](const auto val) { return val / 2; });
    print_vector(my_vector);

    const auto sum1 = std::accumulate(my_vector.begin(), my_vector.end(), 0);
    std::cout << sum1 << '\n';

    return 0;
}
