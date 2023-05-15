# Exercise

For our functions we will use these alias types.

```cpp
using It = std::vector<std::int32_t>::iterator;
using DifferenceType = It::difference_type;
```

The difference type is just a signed integer.

Implement the following functions:

```cpp
void advance(It &it, DifferenceType n);

DifferenceType distance(It first, It last);

It next(It it, DifferenceType n = 1);

It prev(It it, DifferenceType n = 1);
```

- advance
  - Step n-steps to the right (forward) with the iterator
- distance
  - Compute the distance between two iterators of the same container
- next
  - Step 1-step to the right (forward) with the iterator
- prev
  - Step 1-step to the left (backward) with the iterator

## Main Function

```cpp
int main()
{
    std::vector<int> vec{1, 2, 3};
    auto vec_it = vec.begin();

    auto next_it = mystd::next(vec_it);
    std::cout << "*next_it: " << *next_it << '\n';

    auto prev_it = mystd::prev(next_it);
    std::cout << "*prev_it: " << *prev_it << '\n';

    mystd::advance(vec_it, 2);
    std::cout << "advance: " << *vec_it << '\n';

    auto dist = mystd::distance(vec_it, vec.begin());
    std::cout << "distance: " << dist << '\n';

    return 0;
}
```
