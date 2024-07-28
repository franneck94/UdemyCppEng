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

int main()
{
    // User user1 = {Status::Connected, 42U};
    User user1 = {.status = Status::Connected, .id = 42U}; // C++20

    std::cout << user1.id << '\n';

    std::cout << (std::int32_t)user1.status << '\n';
    std::cout << static_cast<std::int32_t>(user1.status) << '\n';

    return 0;
}
