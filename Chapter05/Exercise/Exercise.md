# Exercise

For our exercise we will use the following alias types.

```cpp
namespace fs = std::filesystem;

using WordVector = std::vector<std::string>;
using WordCountPair = std::pair<std::string, std::size_t>;
using CountedWordsMap = std::map<std::string, std::size_t>;
```

Implement the following functions:

```cpp
CountedWordsMap count_words(const WordVector &words);
```

- count_words:
  - count the different words from the word vector and store the word, occurence pairs to the map
  - E.g. {"jan", "is", "my", "name"} {{"Jan": 1, "is": 1, "my": 1, "name": 1}}

## Main Function

```cpp
int main()
{
    auto current_path = fs::current_path();
    current_path /= "text.txt";

    auto text = readFile(current_path.string());
    std::cout << text << '\n' << '\n';

    auto splitted_text = split_text(text, ' ');
    print_vector(splitted_text);

    /* Your exercise here */
    auto counted_words = count_words(splitted_text);
    print_map(counted_words);

    return 0;
}
```
