#include <cstdint>
#include <iostream>

int main()
{
    for (std::uint32_t i = 0U; i < 3U; i++) // post increment
    {
        std::cout << i << "\n";
    }

    for (std::uint32_t i = 0U; i < 3U; ++i) // pre increment
    {
        std::cout << i << "\n";
    }

    for (std::uint32_t i = 3U; i > 0U; i--) // post decrement
    {
        std::cout << i << "\n";
    }

    for (std::uint32_t i = 3U; i > 0U; --i) // pre decrement
    {
        std::cout << i << "\n";
    }

    std::int32_t i = 1;
    std::int32_t result = ++i;
    std::cout << "\n" << result << "\n";

    while (true)
    {
        if (i > 3)
        {
            break;
        }

        ++i;
    }

    do
    {
        if (i > 3)
        {
            break;
        }

        ++i;
    } while (true);

    return 0;
}
