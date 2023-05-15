#include <iostream>

enum class Status
{
    Unkown,
    Connected,
    Disconnected,
};

enum class UserPermission
{
    Unkown,
    User,
    Admin,
};

int main()
{
    Status s1 = Status::Unkown;

    switch (s1)
    {
    case Status::Unkown:
    {
        std::cout << "Unkown\n";
        break;
    }
    case Status::Connected:
    {
        std::cout << "Connected\n";
        break;
    }
    case Status::Disconnected:
    {
        std::cout << "Disconnected\n";
        break;
    }
    }

    if (s1 == Status::Unkown)
    {
    }

    return 0;
}
