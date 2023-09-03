/*
Ejemplo:

Con los valores a=3, b=3, c=3 y n=3 se genera el mensaje "Eureka!"
Con los valores  a=-1, b=0, c=3 y n=5 se genera el mensaje "No se puede calcular"
Con los valores a=3, b=4, c=5 y n=2 se genera el mensaje "Fermat se aplica a n > 2"

*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, n;

    printf("Ingresa el numero a: \n");
    scanf("%d", &a);
    printf("Ingresa el numero b: \n");
    scanf("%d", &b);
    printf("Ingresa el numero c: \n");
    scanf("%d", &c);
    printf("Ingresa el numero n: \n");
    scanf("%d", &n);

    while (1)
    {
        // Verificadores
        if (n < 2)
        {
            printf("Fermat se aplica a n > 2");
            break;
        }
        if (a < 0 && b < 0 && c < 0)
        {
            printf("No se puede calcular");
            break;
        }
        // Declaro mi resultado
        int resultado;
        resultado = pow(a, n) + pow(a, n);
        if (resultado == pow(c, n))
        {
            printf("Oh no! Fermat se equivocó");
            break;
        }
        else
        {
            printf("Eureka!");
            break;
        }
    }
    return 0;
}