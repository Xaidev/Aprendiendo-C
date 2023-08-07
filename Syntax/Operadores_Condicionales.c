/*
    Toma de decisiones if
    operadores de Igualdad        --        operadores de relacion
    == x es igual que y                     > x es mayor que y
    != x es diferente que y                 < x es menor que y
                                            >= x es mayor o igual a y
                                            <= x es menor o igual a y
*/

#include <stdio.h>
int main()
{
    int edad;
    printf("Ingresa tu edad\n");
    scanf("%d", &edad);
    if (edad >= 18)
    {
        printf("Eres mayor de edad");
    }
    else if (edad == 17)
    {
        printf("Te falta 1 año para ser mayor de edad");
    }
    else
    {
        printf("Eres menor de edad");
    }
    return 0;
}