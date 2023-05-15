#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main()
{
    auto workspace_path = fs::path{"C:\\Users\\Jan\\Dektop\\UdemyCppEng"};
    auto chapter_path = workspace_path;
    chapter_path /= "Chapter5";
    std::cout << chapter_path << '\n';

    auto current_path = fs::current_path();
    current_path /= "file_systems.cc";
    std::cout << current_path << '\n';

    std::cout << "relative_path: " << current_path.relative_path() << '\n';
    std::cout << "parent_path: " << current_path.parent_path() << '\n';
    std::cout << "filename: " << current_path.filename() << '\n';
    std::cout << "stem: " << current_path.stem() << '\n';
    std::cout << "extension: " << current_path.extension() << '\n';

    std::cout << "exists: " << std::boolalpha << fs::exists(current_path)
              << '\n';
    std::cout << "is_regular_file: " << std::boolalpha
              << fs::is_regular_file(current_path) << '\n';
    std::cout << "is_directory: " << std::boolalpha
              << fs::is_directory(current_path) << '\n';

    for (auto it = fs::directory_iterator(fs::current_path());
         it != fs::directory_iterator{};
         ++it)
    {
        std::cout << *it << '\n';
    }

    auto new_directory_path = fs::current_path();
    new_directory_path /= "test";

    if (!fs::exists(new_directory_path))
    {
        fs::create_directory(new_directory_path);
    }

    auto new_file_path = new_directory_path;
    new_file_path /= "FileSystemCopy.cc";

    if (!fs::exists(new_file_path))
    {
        fs::copy_file(current_path, new_file_path);
    }
}
