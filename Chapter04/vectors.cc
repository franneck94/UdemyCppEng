#include <cstdint>
#include <iostream>
#include <vector>

int main()
{
    auto my_vec = std::vector<std::int32_t>{1, 2, 3, 4, 5};

    // // C-style for loop for value lookup
    // for (std::size_t i = 0; i < my_vec.size(); i++)
    // {
    //     std::cout << my_vec[i] << '\n';
    // }

    // // begin, end iterator
    // // C++ ranged loop, value == my_vec[i]
    // for (const auto value : my_vec) // read only
    // {
    //     std::cout << value << '\n';
    // }

    // for (auto &value : my_vec) // write and read
    // {
    //     value *= 2;
    // }

    // for (const auto value : my_vec) // read only
    // {
    //     std::cout << value << '\n';
    // }

    auto my_vec2 = std::vector<std::int32_t>(10, 0); // 10 value all with init 0
    // for (const auto value : my_vec2) // read only
    // {
    //     std::cout << value << '\n';
    // }

    // auto my_vec3 = std::vector<std::int32_t>{};
    // my_vec3.push_back(10);
    // my_vec3.push_back(22);
    // for (const auto value : my_vec3) // read only
    // {
    //     std::cout << value << '\n';
    // }

    // my_vec3.pop_back();
    // for (const auto value : my_vec3) // read only
    // {
    //     std::cout << value << '\n';
    // }

    auto it_begin = my_vec2.begin(); // points to the first element
    auto it_end = my_vec2.end();     // points after the last element

    for (it_begin; it_begin != it_end; it_begin++)
    {
        std::cout << *it_begin << '\n';
    }

    std::cout << '\n';
    my_vec2.insert(my_vec2.begin() + 3, 100);
    for (const auto value : my_vec2) // read only
    {
        std::cout << value << '\n';
    }

    return 0;
}
