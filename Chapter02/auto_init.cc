#include <iostream>

// AAA: Almost Always Auto
// DRY: Dont Repeat Yourself
int main()
{
    float a = 10.5; // implicity converted

    std::int32_t b = a; // implicity converted
    auto c = static_cast<std::int32_t>(a); // explicitly converted

    // auto d = std::int32_t{a}; // uniform init
    auto e = std::int32_t{}; // uniform init

    return 0;
}
