#include <cstdint>
#include <iostream>

void printer(std::int32_t value);

int main()
{
    printer(42);

    return 0;
}

void printer(std::int32_t value)
{
    std::cout << value << '\n';
}
