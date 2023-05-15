#include <iostream>
#include <string>
#include <string_view>

void *operator new(std::size_t count)
{
    if (count > 32)
        printf("allocating\n");
    return malloc(count);
}

void do_something1(const std::string &s)
{
    std::cout << s << '\n';
}

void do_something2(std::string_view sv) // instead of a const &string
{
    std::cout << sv << '\n';
}

int main()
{
    // printf("\n\n\nStart SSO\n");

    // // Empty String
    // {
    //     auto str = std::string{""};
    //     auto size = sizeof(str);
    //     auto capacity = str.capacity();
    //     std::cout << "sizeof  : " << size << '\n';
    //     std::cout << "Capacity: " << capacity << '\n' << '\n';
    // }
    // // Before Threshold String
    // {
    //     auto str = std::string(15, '*');
    //     auto size = sizeof(str);
    //     auto capacity = str.capacity();
    //     std::cout << "sizeof  : " << size << '\n';
    //     std::cout << "Capacity: " << capacity << '\n' << '\n';
    // }
    // // After Threshold String
    // {
    //     auto str = std::string(32, '*');
    //     auto size = sizeof(str);
    //     auto capacity = str.capacity();
    //     std::cout << "sizeof  : " << size << '\n';
    //     std::cout << "Capacity: " << capacity << '\n' << '\n';
    // }

    printf("\n\n\nStart SV\n");

    auto s = std::string{"Hi, my name is Jan and i am your instructor."};

    do_something1("Hi, my name is Jan and i am your instructor.");
    do_something2("Hi, my name is Jan and i am your instructor.");

    return 0;
}
