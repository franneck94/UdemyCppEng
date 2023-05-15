#include <iostream>

#include "Shape.hpp"

int main()
{
    Circle circle1(200, 200, 20);
    Circle circle2(250, 250, 20);

    Rectangle rectangle1(100, 100, 150, 150);
    Rectangle rectangle2(300, 300, 350, 350);

    std::cout << "Distance c1-c2: " << circle1.midpoint_distance(&circle2)
              << '\n';
    std::cout << "Distance c1-r1: " << circle1.midpoint_distance(&rectangle1)
              << '\n';
    std::cout << "Distance r1-r2: " << rectangle1.midpoint_distance(&rectangle2)
              << '\n';
    std::cout << "Distance r1-x2: " << rectangle1.midpoint_distance(&circle2)
              << '\n';

    return 0;
}
