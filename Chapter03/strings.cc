#include <array>
#include <cstdint>
#include <iostream>
#include <string>

// "Jan": String literal - known at compile time
int main()
{
    char single_chatacter = 'a';
    char my_text1[] = "Jan"; // \0 - null terminating
    char my_text2[] = {'J', 'a', 'n', '\0'}; // \0 - null terminating
    auto my_text3 = std::array<char, 4>{"Jan"};

    auto my_text4 = std::string{"Jan"};
    std::cout << my_text4.size() << "\n";
    my_text4.append(" Schaffranek");
    std::cout << my_text4.size() << "\n";

    // Whats used in modern c++?
    // my_text1
    // my_text4

    return 0;
}
