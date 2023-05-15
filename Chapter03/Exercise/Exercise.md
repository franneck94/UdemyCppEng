# Exercise

Important: In our use-case we assume that there will be always 2 vehicles on each lane of the highway.

Implement the following types:

```cpp
// Namespace: Ad::Types
struct NeighborVehiclesType
{
    // Array for nearby vehicles on left lane (2 vehicles in total)
    // Array for nearby vehicles on center lane (2 vehicles in total)
    // Array for nearby vehicles on right lane (2 vehicles in total)
};
```

Implement the following functions:

```cpp
// Namespace Ad::Data
NeighborVehiclesType init_vehicles();

// Namespace Ad::Visualize
void print_vehicle(const VehicleType &vehicle);

// Namespace Ad::Visualize
void print_neighbor_vehicles(const NeighborVehiclesType &vehicles);

// Namespace Ad::Visualize
void print_scene(const VehicleType &ego_vehicle,
                 const NeighborVehiclesType &vehicles);
```

- init_vehicles
  - Init the nearby vehicles for each lane
    - IDs starting at 0
    - Feel free to choose the speed and the distance
- print_vehicle
  - Print the ID, Speed, and Distance of a vehicle
- print_neighbor_vehicles
  - Iterate over all vehicles and print out their data
- print_scene
  - Output the vehicles at their postion (regarding the relative distance and lane)
  - Every *row* of the console output has a size of 20 meters

![vehicle](../../media/vehicle.png)

## Main Function

```cpp
#include <cstring>
#include <iostream>
#include <numeric>

#include "AdFunctions.hpp"
#include "AdTypes.hpp"

int main()
{
    auto ego_vehicle = Ad::Data::init_ego_vehicle();
    auto vehicles = Ad::Data::init_vehicles();

    Ad::Visualize::print_vehicle(ego_vehicle);
    Ad::Visualize::print_neighbor_vehicles(vehicles);

    Ad::Visualize::print_scene(ego_vehicle, vehicles);

    return 0;
}
```
