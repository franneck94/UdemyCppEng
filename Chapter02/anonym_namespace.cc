#include <iostream>

// static: Many use-cased, thats not good!
// local variables
// global variables
// static function
// member variables of a class
// member functions of a class

namespace
{
std::uint64_t faculty(const std::uint8_t n)
{
    auto result = std::uint64_t{1};

    for (std::uint8_t i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

constexpr auto VALUE = 5;
}; // namespace

int main()
{
    const auto value1 = faculty(VALUE);
    std::cout << value1 << "\n";
    const auto value2 = faculty(VALUE);
    std::cout << value2 << "\n";

    return 0;
}
