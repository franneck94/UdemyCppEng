#include <cstdint>
#include <iostream>

void print_my_number(std::uint32_t number)
{
    std::cout << number << "\n";
}

void print_my_number(double number)
{
    std::cout << number << "\n";
}

int main()
{
    print_my_number(10U);
    print_my_number(10.5);

    return 0;
}
