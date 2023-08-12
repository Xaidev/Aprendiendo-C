/*
    Funciones Recursivas en C
*/
#include <stdio.h>
// defino la funcion antes
long Factorial(long numero);
int main()
{
    /*
        Ejemplo del factorial de un numero
        5! = 5*4*3*2*1 o 5*4! = 120
        4! = 4*3*2*1 o 4*3! = 24
        3! = 3*2*1 o 3*2! = 6
        2! = 2*1 o 2*1! = 2
        1! = 1
        0! = 1
    */
    int numero;
    printf("ingresa un numero\n");
    scanf("%i", &numero);
    for (int i = 0; i <= numero; i++)
    {
        printf("%ld\n", Factorial(i));
    }
    return 0;
}
long Factorial(long numero)
{
    if (numero <= 1)
    {
        // retorno 1 para evitar que se haga 0, y todo numero sea 0 por consecuencia (Recordar como funcionan los numeros factoriales)
        return 1;
    }
    else
    {
        // voy guardando el numero y retornando el resultado
        return (numero * Factorial(numero - 1));
    }
}