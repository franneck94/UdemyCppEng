#include <algorithm>
#include <iostream>
#include <string>
#include <string_view>
#include <type_traits>

template <typename StringType, typename ViewType>
struct is_char_based
    : public std::conjunction<std::is_same<std::string, StringType>,
                              std::is_same<std::string_view, ViewType>>
{
};

template <typename StringType, typename ViewType>
struct is_wchar_based
    : public std::conjunction<std::is_same<std::wstring, StringType>,
                              std::is_same<std::wstring_view, ViewType>>
{
};

template <typename StringType, typename ViewType>
struct is_string : public std::disjunction<is_char_based<StringType, ViewType>,
                                           is_wchar_based<StringType, ViewType>>
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

    auto input_text_w = std::wstring(input_text.begin(), input_text.end());
    to_upper_case<std::wstring, std::wstring_view>(input_text_w);
    to_lower_case<std::wstring, std::wstring_view>(input_text_w);

    // auto input_text_u32 = std::u32string(input_text.begin(), input_text.end());
    // to_upper_case<std::u32string, std::u32string_view>(input_text_u32);
    // to_lower_case<std::u32string, std::u32string_view>(input_text_u32);

    return 0;
}

template <typename StringType, typename ViewType>
StringType to_upper_case(ViewType text)
{
    static_assert(is_string<StringType, ViewType>::value,
                  "Strings must hold char or wchar_t values");

    auto result = StringType{text};
    std::transform(result.begin(), result.end(), result.begin(), toupper);
    return result;
}

template <typename StringType, typename ViewType>
StringType to_lower_case(ViewType text)
{
    static_assert(is_string<StringType, ViewType>::value,
                  "Strings must hold char or wchar_t values");

    auto result = StringType{text};
    std::transform(result.begin(), result.end(), result.begin(), tolower);
    return result;
}
