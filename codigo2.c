#include <stdio.h>

int main() {
    double pi = 0.0;
    long num_iterations = 10000; // numero de iteraciones
    double denominator = 1.0;
    int sign = 1; // 1 para suma, -1 para resta

    for (long i = 0; i < num_iterations; i++) {
        pi += sign * (4.0 / denominator);
        denominator += 2.0;
        sign *= -1;
    }

    printf("el valor de pi calculado es: %lf\n", pi);

    return 0;
}