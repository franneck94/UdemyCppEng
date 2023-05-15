#include <algorithm>
#include <iostream>
#include <string>
#include <string_view>
#include <type_traits>

template <typename StringType, typename ViewType>
struct is_string
    : public std::conjunction<std::is_same<std::string, StringType>,
                              std::is_same<std::string_view, ViewType>>
{
};

template <typename StringType, typename ViewType>
StringType to_upper_case(ViewType text);

template <typename StringType, typename ViewType>
StringType to_lower_case(ViewType text);

int main()
{
    auto input_text = std::string{};
    std::cout << "Please enter any text: ";
    std::cin >> input_text;

    std::cout << "to_upper_case: "
              << to_upper_case<std::string, std::string_view>(input_text)
              << '\n';
    std::cout << "to_lower_case: "
              << to_lower_case<std::string, std::string_view>(input_text)
              << '\n';

    return 0;
}

template <typename StringType, typename ViewType>
StringType to_upper_case(ViewType text)
{
    static_assert(is_string<StringType, ViewType>::value, "error...");

    auto result = StringType{text};
    std::transform(result.begin(), result.end(), result.begin(), toupper);
    return result;
}

template <typename StringType, typename ViewType>
StringType to_lower_case(ViewType text)
{
    static_assert(is_string<StringType, ViewType>::value, "error...");

    auto result = StringType{text};
    std::transform(result.begin(), result.end(), result.begin(), tolower);
    return result;
}
