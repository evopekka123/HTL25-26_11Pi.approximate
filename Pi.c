#include <iostream>
#include <cmath>
#include <iomanip>

double approximatePiLowerSum(long long n)
{
    double dx = 1.0 / n;
    double area = 0.0;

    for (long long i = 0; i < n; i++)
    {
        double x = i * dx;               // left endpoint
        double y = std::sqrt(1 - x * x); // quarter circle
        area += y * dx;
    }

    return 4 * area; // quarter circle → full circle
}

int main()
{
    long long n = 1000000; // number of rectangles

    double piApprox = approximatePiLowerSum(n);

    std::cout << std::setprecision(15);
    std::cout << "Lower sum approximation of pi\n";
    std::cout << "n = " << n << "\n\n";
    std::cout << "Approximated pi: " << piApprox << "\n";
    std::cout << "Actual pi:       " << M_PI << "\n";
    std::cout << "Error:           " << M_PI - piApprox << "\n";

    return 0;
}
