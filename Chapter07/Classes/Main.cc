#include <iostream>

#include "Weapons.h"

int main()
{
    const auto axe = Axe{"Great dwarfen axe", 12.0F, 1.2F};
    std::cout << axe.get_name() << '\n';

    const auto axe_ptr = &axe;
    std::cout << axe_ptr->get_name() << '\n';

    return 0;
}
