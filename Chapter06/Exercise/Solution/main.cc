#include <algorithm>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <vector>

#include "algo.hpp"
#include "utils.h"

int main()
{
    auto vec1 = std::vector<std::int32_t>(5, 0);
    auto vec2 = std::vector<std::int32_t>(5, 0);
    std::cout << std::boolalpha
              << mystd::equal(vec1.begin(), vec1.end(), vec2.begin()) << '\n';

    mystd::fill_n(vec1.begin(), 5, 1);
    print_vector(vec1);

    mystd::iota(vec2.begin(), vec2.end(), 0);
    print_vector(vec2);
    std::cout << std::boolalpha
              << mystd::equal(vec1.begin(), vec1.end(), vec2.begin()) << '\n';

    mystd::copy(vec2.begin(), vec2.end(), vec1.begin());
    std::cout << std::boolalpha
              << mystd::equal(vec1.begin(), vec1.end(), vec2.begin()) << '\n';

    const auto sum = mystd::accumulate(vec1.begin(), vec1.end(), 0);
    std::cout << sum << '\n';

    return 0;
}
