/*
Escribe un programa en lenguaje C que solicite al usuario
ingresar un número entero. Luego, utiliza una estructura
condicional if para determinar si el número es positivo, negativo o cero,
y muestra un mensaje en la pantalla según el caso.
Asegúrate de manejar todas las posibilidades
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Ingresa el numero\n");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("El numero es positvo");
    }
    else if (num == 0)
    {
        printf("El numero es nulo");
    }
    else
    {
        printf("El numero es negativo");
    }
    return 0;
}