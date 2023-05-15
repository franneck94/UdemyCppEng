# Exercise

We only want to allow std::string and std::string_view for our *library*.  
For that, you have to create type_traits that will check that.  

Afterward, implement the following template functions that will use the type_trait internally with a static_assert:

```cpp
template <typename StringType, typename ViewType>
StringType to_upper_case(ViewType text);

template <typename StringType, typename ViewType>
StringType to_lower_case(ViewType text);
```

And yes this is more of a toy example ;)

## Main Function

```cpp
int main()
{
    auto input_text = std::string{};
    std::cout << "Please enter any text: ";
    std::cin >> input_text;

    std::cout << "to_upper_case: " << to_upper_case<std::string, std::string_view>(input_text) << '\n';
    std::cout << "to_lower_case: " << to_lower_case<std::string, std::string_view>(input_text) << '\n';

    return 0;
}
```
