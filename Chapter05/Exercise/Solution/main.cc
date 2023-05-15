#include <algorithm>
#include <filesystem>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>

#include "utils.h"

namespace fs = std::filesystem;

using WordVector = std::vector<std::string>;
using WordCountPair = std::pair<std::string, std::size_t>;
using CountedWordsMap = std::map<std::string, std::size_t>;

WordVector split_text(const std::string &text, char delimiter);

CountedWordsMap count_words(const WordVector &words);

int main()
{
    auto current_path = fs::current_path();
    current_path /= "text.txt";

    auto text = readFile(current_path.string());
    std::cout << text << '\n' << '\n';

    auto splitted_text = split_text(text, ' ');
    print_vector(splitted_text);

    auto counted_words = count_words(splitted_text);
    print_map(counted_words);

    return 0;
}

WordVector split_text(const std::string &text, char delimiter)
{
    auto words = WordVector{};

    auto iss = std::istringstream{text};
    auto item = std::string{};

    while (std::getline(iss, item, delimiter))
    {
        words.push_back(item);
    }

    return words;
}

CountedWordsMap count_words(const WordVector &words)
{
    auto result = CountedWordsMap{};

    for (const auto &word : words)
    {
        result[word]++;
    }

    return result;
}
