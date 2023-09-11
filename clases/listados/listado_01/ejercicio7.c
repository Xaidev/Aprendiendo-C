#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Ingresa el numero:\n");
    scanf("%d", &n);

    // Calcular zig zag
    if (n >= 0) // Caso donde es mayor o igual a 0
    {
        int resultado = n / 2;
        printf("Para %d, la respuesta es %d ", n, resultado);
    }
    else
    {
        int resultado = -(abs(n) / 2 + 1); // Tomo el valor absoluto del numero para calcularlo correctamente
        printf("Para %d, la respuesta es %d", n, resultado);
    }

    return 0;
}