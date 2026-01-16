#include <stdio.h>
#include <math.h>

double approximate_pi(long n)
{
    double dx = 1.0 / n;
    double area = 0.0;

    for (long i = 0; i < n; i++)
    {
        double x = i * dx;                 // linker Rand
        double y = sqrt(1.0 - x * x);      // Satz des Pythagoras
        area += y * dx;                    // Rechteckfläche
    }

    return 4.0 * area;                     // Viertelkreis → Kreis
}

int main(void)
{
    long n = 1000000;

    double pi = approximate_pi(n);

    printf("Riemann Untersumme\n");
    printf("n = %ld\n", n);
    printf("pi ≈ %.15f\n", pi);

    return 0;
}
