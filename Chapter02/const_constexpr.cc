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
    // const - run time only - variable cant be changed after declaration/init
    // constexpr (c++17) - compile and run time - varaible also cant be changed

    const auto value1 = faculty(5);
    constexpr auto value2 = faculty(5);

    return 0;
}
