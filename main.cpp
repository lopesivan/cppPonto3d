#include <iostream>
#include "Ponto.h"

int main()
{
    Ponto<int, 3> A;

    int v[3] = {4,2,3};

    Ponto<int, 3> B (v);

    std::cout << "B = " << B << "\n";

    A = B;

    std::cout << "A = " << A << "\n";

    float v2[4] = {4.1,2.2,3.3,4.4};
    Ponto<float, 4> C (v2);
    std::cout << "C = " << C << "\n";

    return 0;
}