#include <iostream>
#include <iterator>
#include <vector>

template <typename T>
void print_vector(const std::vector<T> &vec)
{
    for (const auto v : vec)
    {
        std::cout << v << '\n';
    }
    std::cout << '\n';
}

int main()
{
    auto my_vector = std::vector{0, 1, 2, 3, 4, 5};

    // ForwardIterator
    auto it1 = my_vector.begin();
    auto it2 = my_vector.end();

    for (; it1 != it2; ++it1)
    {
        *it1 = 1;
    }
    print_vector(my_vector);

    // BidirectionalIterator
    auto it3 = my_vector.rbegin();
    auto it4 = my_vector.rend();

    for (; it3 != it4; ++it3)
    {
        *it3 = 2;
    }
    print_vector(my_vector);

    // Const ForwardIterator
    auto it5 = my_vector.cbegin();
    auto it6 = my_vector.cend();

    // for (; it5 != it6; ++it5)
    // {
    //     *it5 = 1;
    // }

    // Const BidirectionalIterator
    auto it7 = my_vector.crbegin();
    auto it8 = my_vector.crend();

    // for (; it7 != it8; ++it7)
    // {
    //     *it7 = 2;
    // }

    auto vec_it = my_vector.begin(); // point ot index 0
    std::advance(vec_it, 2); // it += 2;
    std::cout << "Vector[2] = " << *vec_it << '\n';

    auto dist1 = std::distance(vec_it, my_vector.end());
    auto dist2 = std::distance(my_vector.begin(), vec_it);
    std::cout << dist1 << " " << dist2 << '\n';

    auto prev = std::prev(vec_it);
    std::cout << *prev << '\n';
    auto next = std::next(vec_it);
    std::cout << *next << '\n';

    return 0;
}
