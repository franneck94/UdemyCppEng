# Exercise

The use case is a "self-driving car" on a highway with three lanes (Left, Center, and Right lane).  
Our car is the so-called ego vehicle.  
The fictive *radars* and *cameras* of the ego vehicle detect other vehicles that are nearby.  

Example image other vehicles (V) ego vehicle (E):

![vehicle](../../media/vehicle.png)

Note: this plot will be implemented in the coming exercise, here it is just for illustration.

For now, implement the following types:

```cpp
// Namespace: Ad::Types
enum ... LaneAssociationType
{
    // Unknown Lane
    // Left Lane
    // Center Lane
    // Right Lane
};

// Namespace: Ad::Types
struct VehicleType
{
    // Id
    // Lane
    // Speed (meter/s)
    // Relative Distance (meter)
};
```

Implement the following functions:

```cpp
// namespace Ad::Utils
float kph_to_mps(const float kph);

// namespace Ad::Data
VehicleType init_ego_vehicle();

// namespace Ad::Visualize
void print_vehicle(const VehicleType vehicle);
```

- kph_to_mps
  - Convert the $\frac{km}{h}$ input to $\frac{m}{s}$
- init_ego_vehicle
  - Init the ego vehicle with the following attributes
    - ID=-1
    - Speed=135kph
    - Lane=Center
- print_vehicle
  - Print the ID, Speed, and Distance of a vehicle

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
    Ad::Visualize::print_vehicle(ego_vehicle);

    return 0;
}
```
