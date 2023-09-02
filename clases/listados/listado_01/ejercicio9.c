/*
    Escriba un programa que pida un número entero n e imprima el resultado de la serie
*/
#include <stdio.h>

int main()
{
    int n;
    float resultado;
    printf("Ingresa n\n");
    scanf("%d", &n);

    for (float i = 1; i <= n; i++)
    {
        resultado += 1 / i;
    }
    printf("%0.6f", resultado);

    return 0;
}