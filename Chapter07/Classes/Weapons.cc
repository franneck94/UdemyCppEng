#include <iostream>

#include "Weapons.h"

std::string Axe::get_name() const
{
    return name;
}

float Axe::get_damage() const
{
    return damage;
}

float Axe::get_attack_speed() const
{
    return attack_speed;
}
