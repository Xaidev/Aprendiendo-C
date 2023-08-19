#include <stdio.h>
#include <math.h>
/*
Escriba un programa que pida un numero entero n e imprima “primo” si el numero es primo o “compuesto” en caso
contrario. (Nota: Basta con verificar los numeros hasta √n.)
*/
int main()
{
    int num, count;
    int divisor = 1;
    printf("Ingresa el numero entero\n");
    scanf("%d", &num);
    if (num == 2)
    {
        // Caso especifico donde el numero ingresado sea 2, unico numero par que es primo.
        printf("Su numero es primo");
    }
    else if (num % 2 == 0)
    {
        // Todo numero par no es primo, descartamos todos los pares
        printf("Su numero es compuesto");
    }
    else
    {
        // Creo un ciclo infinito que se rompe solo es en caso de haber mas de 2 divisores o llegar al maximo de divisores posibles.
        while (1)
        {
            // Verifico primero si la cantidad de divisores es mayor a 3, de ser asi es compuesto.
            if (count > 3)
            {
                printf("Su numero es compuesto!\n");
                break;
            }
            // Verifico que el divisor tenga un maximo para evitar que sea un bucle infinito.
            if (divisor > pow(num, 1 / 2))
            {
                printf("Su numero es primo!\n");
                break;
            }
            // Con este if y else vamos obteniendo la cantidad de divisores.
            if (num % divisor == 0)
            {
                count++;
                divisor++;
            }
            else
            {
                divisor++;
            }
        }
    }
    return 0;
}
