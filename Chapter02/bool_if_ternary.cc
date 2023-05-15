#include <cstdint>
#include <iostream>

int main()
{
    bool b1 = true;
    bool b2 = false;

    if (b1)
    {
        std::cout << "Printy Printy\n";
    }
    else if (!b2)
    {
    }
    else
    {
    }

    std::int32_t result;
    if (b1 == true)
        result = 10;
    else
        result = -10;

    std::int32_t result2 = b1 == true ? 10 : -10; // ternary

    return 0;
}
