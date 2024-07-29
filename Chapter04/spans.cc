#include <array>
#include <cstdint>
#include <iostream>
#include <span>
#include <vector>

// void print_container(const std::vector<std::int32_t> &vec)
// {
//     for (const auto value : vec)
//     {
//         std::cout << value << '\n';
//     }
// }

// template<std::uint32_t N>
// void print_container(const std::array<std::int32_t, N> &arr)
// {
//     for (const auto value : arr)
//     {
//         std::cout << value << '\n';
//     }
// }

void print_span(std::span<std::int32_t> span)
{
    for (const auto value : span)
    {
        std::cout << value << '\n';
    }
}

// class span:
// length/size of that contig. memory
// ptr to first element

int main()
{
    auto vec = std::vector<std::int32_t>{1, 2, 3};
    print_span(vec);

    auto arr = std::array<std::int32_t, 3>{1, 2, 3};
    print_span(arr);

    return 0;
}
