#include <array>
#include <cstdint>
#include <iostream>
#include <span>
#include <vector>

// void print_container(const std::vector<std::int32_t> &vec)
// {
//     for (const auto val : vec)
//     {
//         std::cout << val << '\n';
//     }
// }

// template <std::size_t N>
// void print_container(const std::array<std::int32_t, N> &arr)
// {
//     for (const auto val : arr)
//     {
//         std::cout << val << '\n';
//     }
// }

void print_container(std::span<std::int32_t> span)
{
    for (const auto val : span)
    {
        std::cout << val << '\n';
    }
}

int main()
{
    std::int32_t my_c_arr[] = {1, 2, 3, 4, 5};
    auto my_vec = std::vector<std::int32_t>{1, 2, 3, 4, 5};
    auto my_arr = std::array<std::int32_t, 5U>{1, 2, 3, 4, 5};

    print_container(my_vec);
    print_container(my_arr);
    print_container(my_c_arr);

    return 0;
}
