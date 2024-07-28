#include <array>
#include <cstdint>
#include <iostream>

int main()
{
                                      // Address: Value
    auto my_age = std::uint32_t{30U}; // F940-F943: 30
    std::cout << &my_age << "\n";
    std::cout << my_age << "\n";
                                                   // Address: Value
    std::uint32_t *pointer_to_some_data = &my_age; // F6E8:    F940
    std::cout << &pointer_to_some_data << "\n";

    *pointer_to_some_data = 31; // deref operator
    std::cout << my_age << "\n";

    return 0;
}
