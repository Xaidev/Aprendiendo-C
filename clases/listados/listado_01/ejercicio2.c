#include <stdio.h>
#include <math.h>
int main()
{
    int arreglo[8];
    int numero, auxiliar;
    int contador = 0;
    printf("Numero a convertir:\n");
    scanf("%d", &numero);
    auxiliar = abs(numero);

    // Convertir numero a binario
    while (1)
    {
        arreglo[contador] = (auxiliar % 2);
        if (auxiliar < 2)
        {
            ++contador;
            break;
        }
        auxiliar /= 2;
        contador++;
        if (auxiliar == 1)
        {
            arreglo[contador] = 1;
            contador++;
            break;
        }
    }

    // Completar bits

    if (contador < 8)
    {
        for (int i = contador; i <= 7; i++)
        {
            arreglo[i] = 0;
        }
    }

    // Complemento 2 si es un numero negativo
    if (numero < 0)
    {
        // Cambio de 0 a 1 y 1 a 0
        for (int i = 0; i <= 7; i++)
        {
            if (arreglo[i] == 0)
            {
                arreglo[i] = 1;
            }
            else
            {
                arreglo[i] = 0;
            }
        }
        // Acarreo
        for (int i = 0; i < 8; i++)
        {
            if (arreglo[i] == 1)
            {
                arreglo[i] = 0;
            }
            else
            {
                arreglo[i] = 1;
                break;
            }
        }
    }

    // Print en pantalla
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", arreglo[i]);
    }

    return 0;
}
