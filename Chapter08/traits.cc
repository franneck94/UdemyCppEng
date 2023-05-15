#include <iostream>
#include <type_traits>

template <typename T>
struct is_numeric
    : public std::disjunction<std::is_integral<T>, std::is_floating_point<T>>
{
};

template <typename T>
auto max1(const T &a, const T &b)
{
    static_assert(
        std::disjunction_v<std::is_integral<T>, std::is_floating_point<T>>,
        "failed...");

    return (a < b) ? b : a;
}

template <typename T>
auto max2(const T &a, const T &b)
{
    static_assert(is_numeric<T>::value, "failed...");

    return (a < b) ? b : a;
}

template <typename T, typename U>
auto max3(const T &a, const U &b)
{
    static_assert(std::conjunction_v<is_numeric<T>, is_numeric<U>>,
                  "failed...");

    return (a < b) ? b : a;
}

int main()
{
    std::cout << max1(10, 11) << std::endl;
    std::cout << max1(10.0F, 11.0F) << std::endl;
    std::cout << max1(10.0, 11.0) << std::endl;
    std::cout << max1<short>(10, 11) << std::endl;

    std::cout << max2(10, 11) << std::endl;
    std::cout << max2(10.0F, 11.0F) << std::endl;
    std::cout << max2(10.0, 11.0) << std::endl;
    std::cout << max2<short>(10, 11) << std::endl;

    std::cout << max3(10, 11.0) << std::endl;

    return 0;
}
