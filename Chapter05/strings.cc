#include <iostream>
#include <string>
#include <iomanip>

void print_found_idx(const std::size_t idx, const std::string &func_name)
{
    std::cout << "Function: " << func_name << '\n';
    if (idx != std::string::npos)
        std::cout << "Found at idx: " << idx << '\n';
    else
        std::cout << "Not Found!" << idx << '\n';
}

int main()
{
    auto text = std::string{"Hello people!"};
    std::cout << text << '\n';

    std::cout << text.empty() << '\n';
    std::cout << text.length() << '\n';

    const auto search_str1 = "eo";
    const auto idx1 = text.find(search_str1, 5);
    print_found_idx(idx1, "find");

    const auto search_str2 = "e";
    const auto idx2 = text.rfind(search_str2);
    print_found_idx(idx2, "rfind");

    auto s1 = std::string{"Jann"};
    auto s2 = std::string{"Jan"};
    std::cout << "s1 == s2: " << std::boolalpha << (s1 == s2) << '\n';
    const auto comapared = s1.compare(s2);
    std::cout << "s1.comapre(s2): " << comapared << '\n';

    const auto search_str = "nn";
    const auto idx = s1.find(search_str);
    if (idx != std::string::npos)
        s1.replace(idx, 2, "n");
    std::cout << s1 << '\n';

    const auto sub_str = s1.substr(2, 3);
    std::cout << sub_str << '\n';

    auto si = std::to_string(42);      // si="42"
    auto sl = std::to_string(42L);     // sl="42"
    auto su = std::to_string(42u);     // su="42"

    auto i1 = std::stoi("42");                 // i1 = 42
    auto i2 = std::stoi("101010", nullptr, 2); // i2 = 42
    auto i3 = std::stoi("052", nullptr, 8);    // i3 = 42
    auto i4 = std::stoi("0x2A", nullptr, 16);  // i4 = 42

    auto d1 = std::stod("123.45");       // d1 = 123.45000000000000
    auto d2 = std::stod("1.2345e+2");    // d2 = 123.45000000000000
    auto d3 = std::stod("0xF.6E6666p3"); // d3 = 123.44999980926514

    return 0;
}
