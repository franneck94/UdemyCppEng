#include <iostream>

namespace DB
{
namespace Types
{
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
} // namespace Types

namespace Methods
{
void printUserStatus(DB::Types::User user)
{
    std::cout << (std::int32_t)user.status << '\n';
    std::cout << static_cast<std::int32_t>(user.status) << '\n';
}
} // namespace Methods
} // namespace DB

int main()
{
    // User user1 = {Status::Connected, 42U};
    DB::Types::User user1 = {.status = DB::Types::Status::Connected,
                             .id = 42U}; // C++20

    DB::Methods::printUserStatus(user1);

    return 0;
}
