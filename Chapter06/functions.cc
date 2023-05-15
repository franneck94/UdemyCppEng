#include <functional>
#include <iostream>
#include <vector>

int f(int arg)
{
    std::cout << arg << '\n';

    return ++arg;
}

int new_approach2(std::function<int(int)> func)
{
    return func(2);
}

int main()
{
    auto param = int{1};

    // Old C-style approach
    int (*old_approach)(int);
    old_approach = f;
    old_approach(2);

    // C++ approach
    auto new_approach = std::function{f};
    auto result = new_approach(param);

    new_approach2(f);

    const int threshold = 2;
    auto fns = std::vector<std::function<bool(const int)>>{
        [&threshold](const int v) { return v > threshold; },
        [&threshold](const int v) { return v < threshold; },
        [&threshold](const int v) { return v == threshold; },
        [&threshold](const int v) { return v != threshold; },
        [&threshold](const int v) { return v >= threshold; },
        [&threshold](const int v) { return v <= threshold; },
    };

    // auto fns = std::vector<bool (*)(const int)>{
    //     [](const int v) { return v > 2; },
    //     [](const int v) { return v < 2; },
    //     [](const int v) { return v == 2; },
    //     [](const int v) { return v != 2; },
    //     [](const int v) { return v >= 2; },
    //     [](const int v) { return v <= 2; },
    // };

    for (const auto &fn : fns)
    {
        std::cout << std::boolalpha << fn(1) << '\n';
    }

    return 0;
}
