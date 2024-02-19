#include <cstring>
#include <iostream>
#include <numeric>

#include "AdFunctions.h"
#include "AdTypes.h"

int main()
{
    auto ego_vehicle = Ad::Data::init_ego_vehicle();
    auto vehicles = Ad::Data::init_vehicles();

    Ad::Visualize::print_vehicle(ego_vehicle);
    Ad::Visualize::print_neighbor_vehicles(vehicles);

    Ad::Visualize::print_scene(ego_vehicle, vehicles);

    return 0;
}
