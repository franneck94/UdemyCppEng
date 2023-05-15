#include <iostream>

enum class Status
{
    Unkown,
    Connected,
    Disconnected,
};

// POD
struct User
{
    Status status;
    std::uint64_t id;
};

// AAA: Almost Always Auto
// DRY: Dont Repeat Yourself
int main()
{
    float a = 10.0F;

    // std::int32_t b = a;
    // auto c = std::int32_t{a};
    auto d = static_cast<std::int32_t>(a);

    auto e = std::int32_t{a};

    auto user1 = User{.status = Status::Connected, .id = 42U}; // C++20

    return 0;
}
