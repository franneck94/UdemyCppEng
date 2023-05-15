#include <any>
#include <iostream>
#include <string>

using namespace std::string_literals;

bool is_integer(const std::any &a)
{
    return a.type() == typeid(int);
}

bool is_string(const std::any &a)
{
    return a.type() == typeid(std::string);
}

int main()
{
    auto value = std::any{42}; // integer 42
    std::cout << sizeof(value) << '\n';
    value = 42.0; // double 42.0
    std::cout << sizeof(value) << '\n';
    value = "42"s; // std::string "42"
    std::cout << sizeof(value) << '\n';

    try
    {
        auto d = std::any_cast<std::string>(value);
        std::cout << d << '\n';
    }
    catch (std::bad_any_cast const &e)
    {
        std::cout << e.what() << '\n';
    }

    std::cout << "is_integer: " << std::boolalpha << is_integer(value) << '\n';
    std::cout << "is_string: " << std::boolalpha << is_string(value) << '\n';

    auto ltest = [](std::any const &a) { return a.has_value(); };
    std::cout << "has_value: " << std::boolalpha << ltest(value) << '\n';

    auto d = std::any_cast<std::string>(value);
    std::cout << d << '\n';

    return 0;
}
