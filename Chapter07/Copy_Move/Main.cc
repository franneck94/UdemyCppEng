#include <iostream>
#include <vector>

#include "Matrix.h"

const Matrix<float> my_func(const Matrix<float> &m)
{
    m.print_matrix();

    return m;
}

int main()
{
    // // Copy Example
    // auto m1 = Matrix<float>{-1.0, -2.0, -3.0, -4.0};
    // auto m2 = m1; // copy const
    // auto m3 = Matrix<float>{1.0, -2.0, -3.0, -4.0};
    // m2 = m3; // copy assignm operator

    // Move Example
    auto vec = std::vector<Matrix<float>>{};

    vec.push_back(Matrix<float>{-1.0, -2.0, -3.0, -4.0}); // creates rvalue obj

    vec[0].print_matrix();

    return 0;
}
