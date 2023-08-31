/*
Observe el siguiente patrón que usa 8 símbolos '*' por cada uno de los 7 niveles.
Escriba un programa que pida un número entero n e imprima el mismo patrón con n símbolos '*' por cada uno de los n-1 niveles.
*/

#include <stdio.h>
int main()
{

    int n; // Numero de niveles
    printf("Ingresa n\n");
    scanf("%d", &n);
    int esp_c = 1;     // Espacio cercano
    int esp_l = n - 1; // Espacio lejano

    // Cantidad de filas que imprimire
    for (int i = 1; i <= n - 1; i++)
    {
        // Cantidad de asteriscos que imprimire en cada columna
        for (int j = 0; j <= n; j++)
        {
            // Salto de linea
            if (j == n)
            {
                // Ultima iteracion omito el salto
                if (i == n - 1)
                {
                    break;
                }
                printf("\n");
                break;
            }
            // Agrego el espacio cercano
            if (j == esp_c)
            {
                printf(" ");
            }
            // Agrego el espacio lejano
            if (j == esp_l)
            {
                printf(" ");
            }
            printf("*");
        }
        // Indico en que posicion estara cada espacio en cada fila/iteracion
        esp_c++;
        esp_l--;
    }
    return 0;
}