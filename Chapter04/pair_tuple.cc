#include <cstdint>
#include <iostream>
#include <string>
#include <tuple>
#include <utility>

struct DataBlaBla
{
    std::int32_t i;
    float j;
};

std::tuple<std::int32_t, std::string, float> some_functions(
    const std::int32_t input)
{
    return std::make_tuple(input + 1,
                           std::to_string(input + 2),
                           static_cast<float>(input + 3));
}

DataBlaBla some_functions2(const std::int32_t input)
{
    return DataBlaBla{input + 1, static_cast<float>(input + 3)};
}

int main()
{
    auto my_pair = std::pair<std::int32_t, float>{1337, 42.0F};
    std::cout << my_pair.first << '\n';
    std::cout << my_pair.second << '\n';

    auto my_tuple =
        std::tuple<std::int32_t, float, std::string>{1337, 42.0F, "Jan"};
    std::cout << std::get<0>(my_tuple) << '\n';
    std::cout << std::get<1>(my_tuple) << '\n';
    std::cout << std::get<2>(my_tuple) << '\n';

    const auto result = some_functions(42);
    std::cout << std::get<0>(result) << '\n';
    std::cout << std::get<1>(result) << '\n';
    std::cout << std::get<2>(result) << '\n';

    const auto &[i, s, f] = some_functions(42); // Strucutred Binding
    std::cout << i << '\n';
    std::cout << s << '\n';
    std::cout << f << '\n';

    const auto &[i1, f1] = some_functions2(42);

    return 0;
}
