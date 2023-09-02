/*
Observe el siguiente patrón de impresión de 8 niveles.
Escriba un programa que pida un número entero n e imprima el mismo patrón con n niveles.

  ########
   +++++++
    ######
     +++++
      ####
       +++
        ##
         +

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Cantidad de niveles\n");
    scanf("%d", &n);
    int auxiliar = n; // auxiliar que puedo ir modificando

    // Determino cuantas filas hare
    for (int i = 0; i <= n; i++)
    {
        // int esp es para saber cuantos espacios tendre en cada fila
        int esp = n - auxiliar;
        // Distingo cada fila de manera par o impar para saber si imprimir # o +
        if (i % 2 == 0)
        {
            // Cuantos # imprimire en la fila
            for (int j = 0; j <= auxiliar; j++)
            {
                // Si esp es > 0 quiere decir que en la fila debo imprimir espacios
                if (esp > 0)
                {
                    // Aqui printeo cada espacio
                    for (int k = 0; k < esp; k++)
                    {
                        printf(" ");
                    }
                    esp = 0; // cuando termino hago que esp sea 0 (variable local) para no repetir el if cuando imprima "#" o "+"
                }
                // Si j == auxiliar quiere decir que ya llego al final y imprimo salto de linea
                if (j == auxiliar)
                {
                    // Esta condicion solo se cumple cuando es la ultima fila a imprimir, break para acabar el programa
                    if (i + 1 >= n)
                    {
                        break;
                    }
                    printf("\n");
                    break;
                }
                printf("#");
            }
            auxiliar--; // Con esto distingo la cantidad de veces que debo imprimir el "#" o "+" y la cantidad de espacios
        }
        else
        {
            for (int j = 0; j <= auxiliar; j++)
            {
                if (esp > 0)
                {
                    for (int k = 0; k < esp; k++)
                    {
                        printf(" ");
                    }
                    esp = 0;
                }
                if (j == auxiliar)
                {
                    if (i + 1 >= n)
                    {
                        break;
                    }
                    printf("\n");
                    break;
                }
                printf("+");
            }
            auxiliar--;
        }
    }
    return 0;
}