#include <array>
#include <cstdint>
#include <iostream>

// c style array as param => it will decay to a pointer (64bits = 8bytes)
void print_array_values1(const std::uint32_t arr[], const std::size_t len)
{
    for (std::size_t i = 0; i < len; i++)
    {
        std::cout << arr[i] << '\n';
    }
}

template <std::size_t N>
void print_array_values2(const std::array<std::uint32_t, N> arr)
{
    for (std::size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << '\n';
    }
}

int main()
{
    constexpr static auto len = std::size_t{5};

    // C-Style Array
    std::uint32_t my_array[len] = {1, 2, 3, 4, 5};
    print_array_values1(my_array, len);

    // C++ Array
    auto my_array2 = std::array<std::uint32_t, len>{1, 2, 3, 4, 5};
    print_array_values2(my_array2);

    return 0;
}
