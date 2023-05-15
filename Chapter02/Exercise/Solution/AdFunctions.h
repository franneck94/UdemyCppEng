#pragma once

#include "AdTypes.h"

namespace Ad
{
namespace Utils
{

float kph_to_mps(const float kph);

} // namespace Utils

namespace Data
{

Ad::Types::VehicleType init_ego_vehicle();

} // namespace Data

namespace Visualize
{

void print_vehicle(const Ad::Types::VehicleType vehicle);

} // namespace Visualize

} // namespace Ad
