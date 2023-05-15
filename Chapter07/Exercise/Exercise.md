# Exercise

Implement the following classes.

```cpp
struct Shape
{
public:
    Shape() = default;
    ~Shape() noexcept = default;

    virtual double get_area() const = 0;
    double midpoint_distance(const Shape *other) const;
    virtual Coordiante get_midpoint() const = 0;
};

struct Circle : Shape
{
    Circle(...);
    ~Circle() noexcept = default;

    ... get_area() ...;
    ... get_midpoint() ...;

    std::uint32_t x_midpoint;
    std::uint32_t y_midpoint;
    std::uint32_t radius;
};

struct Rectangle : Shape
{
    Rectangle(...);
    ~Rectangle() noexcept = default;

    ... get_area() ...;
    ... get_midpoint() ...;

    std::uint32_t x1;
    std::uint32_t y1;
    std::uint32_t x2;
    std::uint32_t y2;
};
```

Implement the missing member functions for the Shape, Rectangle, and Circle class.

Note: To compute the distance of two points you can use the **get_distance** function from **distance.hpp**

## Main Function

```cpp
int main()
{
    Circle circle1(200, 200, 20);
    Circle circle2(250, 250, 20);

    Rectangle rectangle1(100, 100, 150, 150);
    Rectangle rectangle2(300, 300, 350, 350);

    std::cout << "Distance c1-c2: " << circle1.midpoint_distance(&circle2) << '\n';
    std::cout << "Distance c1-r1: " << circle1.midpoint_distance(&rectangle1) << '\n';
    std::cout << "Distance r1-r2: " << rectangle1.midpoint_distance(&rectangle2) << '\n';
    std::cout << "Distance r1-x2: " << rectangle1.midpoint_distance(&circle2) << '\n';

    return 0;
}
```
