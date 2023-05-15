#include <iostream>
#include <string>

template <typename T>
T concat1(T first)
{
    return first;
}

template <typename T, typename... Args>
T concat1(T first, Args... args)
{
    return first + concat1(args...);
}

template <typename T, typename... Args>
T concat2(Args... args)
{
    return (... - args);
    // return (args - ...);
}

int main()
{
    auto s1 = std::string{"He"};
    auto s2 = std::string{"ll"};
    auto s3 = std::string{"o"};

    // first=s1, ...args=[s2, s3]
    // first=s2, ...args=[s3]
    // first=s3, ...args=[]
    // std::cout << concat1(s1, s2, s3) << std::endl;
    // std::cout << concat1(2, 3, 4) << std::endl;
    std::cout << concat2<int>(2, 3, 4) << std::endl;

    return 0;
}
