#pragma once

#include "AdTypes.h"

namespace Ad
{

using namespace Ad::Types;

namespace Utils
{

float kph_to_mps(const float kph);

} // namespace Utils

namespace Data
{

VehicleType init_ego_vehicle();

NeighborVehiclesType init_vehicles();

} // namespace Data

namespace Visualize
{

void print_vehicle(const VehicleType vehicle);

void print_neighbor_vehicles(const NeighborVehiclesType &vehicles);

void print_scene(const VehicleType &ego_vehicle,
                 const NeighborVehiclesType &vehicles);

} // namespace Visualize

} // namespace Ad
