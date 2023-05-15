#include <iostream>

// Input Only Params: Const
constexpr std::uint64_t faculty(const std::uint8_t n)
{
    auto result = std::uint64_t{1};

    for (std::uint8_t i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    // const - run time only (only for integers may be compile time)
    // constexpr (c++17) - compile and run time

    const auto value1 = faculty(5);
    constexpr static auto value2 = faculty(5);

    return 0;
}
