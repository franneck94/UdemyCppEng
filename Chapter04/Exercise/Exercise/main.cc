#include <iostream>
#include <vector>

#include "IteratorLib.h"

int main()
{
    auto vector = std::vector<int>{1, 2, 3};
    auto vector_it = vector.begin();

    auto next_it = mystd::next(vector_it);
    std::cout << "*next_it: " << *next_it << '\n';

    auto prev_it = mystd::prev(next_it);
    std::cout << "*prev_it: " << *prev_it << '\n';

    mystd::advance(vector_it, 2);
    std::cout << "advance: " << *vector_it << '\n';

    auto dist = mystd::distance(vector.begin(), vector_it);
    std::cout << "distance: " << dist << '\n';

    return 0;
}
