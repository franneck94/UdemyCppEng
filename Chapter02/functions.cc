#include <cstdint>
#include <iostream>

// function declaration
void my_print_function();

int main()
{
    my_print_function(); // function call

    return 0;
}

// function definiton
void my_print_function()
{
    std::cout << "Hello World!\n";
}
