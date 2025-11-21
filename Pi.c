#include <stdio.h>

int main(void) {
    int n;
    double pi_approx = 0.0;
    double dx, x;

    printf("Anzahl der Intervalle (n): ");
    scanf("%d", &n);

    dx = 1.0 / n;

    // Untersumme: x_i = i * dx (linke Riemann-Summe)
    for (int i = 0; i < n; i++) {
        x = i * dx;
        pi_approx += 4.0 / (1.0 + x * x);
    }

    pi_approx *= dx;

    printf("Annäherung von Pi mit %d Intervallen: %.15f\n", n, pi_approx);

    return 0;
}

