/*
 * Archivo: codigo2.c
 * Descripcion: Este programa calcula una aproximacion del valor de Pi
 * utilizando la serie de Leibniz.
 */
#include <stdio.h>

int main() {
    double pi = 0.0;
    long num_iterations = 10000; // numero de iteraciones
    double denominator = 1.0;
    int sign = 1; // 1 para suma, -1 para resta
// Bucle para iterar a traves de la serie de Leibniz.
    for (long i = 0; i < num_iterations; i++) {
        // La formula de Leibniz es (4/1) - (4/3) + (4/5) - (4/7) ...
        // Este paso calcula cada termino de la serie y lo agrega a 'pi'.
        pi += sign * (4.0 / denominator);
        denominator += 2.0;
        sign *= -1;
    }

    printf("el valor de pi calculado es: %lf\n", pi);

    return 0;
}
