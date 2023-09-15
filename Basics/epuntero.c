#include <stdio.h>
#include <math.h>

void calcularFuncionCuadratica(float a, float b, float c, float *x1, float *x2)
{
    float discriminante = (b * b) - (4 * a * c);

    if (discriminante >= 0)
    {
        *x1 = (-b + sqrt(discriminante)) / (2 * a);
        *x2 = (-b - sqrt(discriminante)) / (2 * a);
    }
    else
    {
        *x1 = *x2 = 0; // Raíces complejas, se asigna 0 a ambos punteros
    }
}

int main()
{
    float a, b, c, x1, x2;

    printf("Ingrese los coeficientes de la función cuadrática (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    calcularFuncionCuadratica(a, b, c, &x1, &x2);

    if (x1 == x2 && x1 == 0)
    {
        printf("La función tiene raíces complejas.\n");
    }
    else
    {
        printf("Las raíces de la función cuadrática son:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}
