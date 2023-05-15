# Exercise

Implement the following functions:

```cpp
using Iterator = std::vector<std::int32_t>::iterator;

bool equal(Iterator first1, Iterator last1, Iterator first2);

Iterator fill_n(Iterator first, std::size_t count, const std::int32_t &value);

void iota(Iterator first, Iterator last, std::int32_t value);

Iterator copy(Iterator first, Iterator last, Iterator d_first);

std::int32_t accumulate(Iterator first, Iterator last, std::int32_t init);
```

- equal
  - Return true if all elements of both vectors are the same
- fill_n
  - Fill the vector **n** times with the value **value** within the range $[first, last)$
- iota
  - Fill the vector with incrementing the value **value** within the range $[first, last)$
- copy
  - Copy the elements from one vector to the other vector
- accumulate
  - Compute the sum of the vector within the range $[first, last)$

## Main Function

```cpp
int main()
{
    auto vec1 = std::vector<std::int32_t>(5, 0);
    auto vec2 = std::vector<std::int32_t>(5, 0);

    std::cout << std::boolalpha << mystd::equal(vec1.begin(), vec1.end(), vec2.begin()) << std::dec
              << '\n';

    mystd::fill_n(vec1.begin(), 5, 1);
    print_vector(vec1);

    mystd::iota(vec2.begin(), vec2.end(), 0);
    print_vector(vec2);

    std::cout << std::boolalpha << mystd::equal(vec1.begin(), vec1.end(), vec2.begin()) << std::dec
              << '\n';

    mystd::copy(vec2.begin(), vec2.end(), vec1.begin());

    std::cout << std::boolalpha << mystd::equal(vec1.begin(), vec1.end(), vec2.begin()) << std::dec
              << '\n';

    const auto sum = mystd::accumulate(vec1.begin(), vec1.end(), 0);
    std::cout << sum << '\n';

    return 0;
}
```
