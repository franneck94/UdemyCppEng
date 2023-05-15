#include <chrono>
#include <cstdint>
#include <execution>
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

struct Data
{
    std::int32_t v1;
    std::int32_t v2;
};

int main()
{
    auto my_vector = std::vector<std::int32_t>(NUM_ELEMENTS, 0U);
    std::generate(my_vector.begin(), my_vector.end(), gen);
    print_vector(my_vector);

    const auto min = std::min_element(my_vector.begin(), my_vector.end());
    const auto max = std::max_element(my_vector.begin(), my_vector.end());
    std::cout << "Min: " << *min << " Max: " << *max << '\n';

    const auto my_vector2 = std::vector<Data>{{1, 1}, {2, 3}};
    const auto my_vector3 = std::vector<Data>{{1, 1}, {2, 2}};
    const auto eq = std::equal(std::execution::par,
                               my_vector2.begin(),
                               my_vector2.end(),
                               my_vector3.begin(),
                               [](const auto &i, const auto &j) {
                                   return i.v1 < j.v1 && i.v2 < j.v2;
                               });
    std::cout << "Equal? " << std::boolalpha << eq << '\n';

    return 0;
}
