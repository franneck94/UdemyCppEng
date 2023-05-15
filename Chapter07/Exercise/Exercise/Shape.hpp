#pragma once

#include <cstdint>
#include <utility>

struct Coordinate
{
    std::uint32_t x_midpoint;
    std::uint32_t y_midpoint;
};

struct Shape
{
public:
    Shape() = default;
    virtual ~Shape() noexcept = default;

    virtual double get_area() const = 0;
    double midpoint_distance(const Shape *other) const;
    virtual Coordinate get_midpoint() const = 0;
};

struct Circle : Shape
{
    Circle(std::uint32_t x_midpoint_,
           std::uint32_t y_midpoint_,
           std::uint32_t radius_);
    ~Circle() noexcept = default;

    virtual double get_area() const final;
    virtual Coordinate get_midpoint() const final;

    std::uint32_t x_midpoint;
    std::uint32_t y_midpoint;
    std::uint32_t radius;
};

struct Rectangle : Shape
{
    Rectangle(std::uint32_t x1_,
              std::uint32_t y1_,
              std::uint32_t x2_,
              std::uint32_t y2_);
    ~Rectangle() noexcept = default;

    virtual double get_area() const final;
    virtual Coordinate get_midpoint() const final;

    std::uint32_t x1;
    std::uint32_t y1;
    std::uint32_t x2;
    std::uint32_t y2;
};
