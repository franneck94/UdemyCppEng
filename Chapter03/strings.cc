#include <array>
#include <cstdint>
#include <iostream>
#include <string>

int main()
{
    // C-String
    char my_text1[] = "ABCDEFG"; // \0

    // C++ Array (Bad)
    auto my_text2 = std::array<char, 8>{'A', 'B', 'C', 'D'};

    auto my_text3 = std::string{"ABCDEFG"};
    std::cout << my_text3.size() << '\n';   // excludes \0
    std::cout << my_text3.length() << '\n'; // excludes \0

    return 0;
}
