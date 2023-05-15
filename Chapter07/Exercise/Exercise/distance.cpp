#include "distance.hpp"

double get_distance(const std::uint32_t x1,
                    const std::uint32_t y1,
                    const std::uint32_t x2,
                    const std::uint32_t y2)
{
    const auto a_diff = static_cast<std::int32_t>(x1) - static_cast<std::int32_t>(x2);
    const auto a_squared = std::pow(a_diff, 2.0);
    const auto b_diff = static_cast<std::int32_t>(y1) - static_cast<std::int32_t>(y2);
    const auto b_squared = std::pow(b_diff, 2.0);
    const auto distance = std::sqrt(a_squared + b_squared);

    return distance;
}
