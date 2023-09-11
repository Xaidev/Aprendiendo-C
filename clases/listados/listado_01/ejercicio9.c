#include <stdio.h>

int main()
{
    int n;
    float resultado;
    printf("Ingresa n\n");
    scanf("%d", &n);

    for (float i = 1; i <= n; i++)
    {
        resultado += 1 / i; // Sumatoria que va desde 1 a n
    }
    printf("%0.6f", resultado); // Imprimo el resultado

    return 0;
}