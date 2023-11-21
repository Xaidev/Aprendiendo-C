/*
Escriba un programa que pida dos números enteros n y m, para que luego pida ingresar suficientes valores enteros hasta llenar un arreglo A de largo n.
Su programa deberá generar dos arreglos B y C, donde B contendrá todos los valores del arreglo A que sean menores a m,
mientras que C contendrá todos los valores del arreglo A que sean mayores o iguales a m.

Ejemplos:
- Para n=10, m=6 y A[10] = {8, -2, 0, 7, 6, 12, 86, 6, 4, 9} la respuesta es B[3] = {-2, 0, 4} y C[7] = {8, 7, 6, 12, 86, 6, 9}

- Para n=10, m=99 y A[10] = {8, -2, 0, 7, 6, 12, 86, 6, 4, 9} la respuesta es B[10] = {8, -2, 0, 7, 6, 12, 86, 6, 4, 9} y C será vacío.
*/
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int A[n];

    // Ingreso los numeros
    for (int i = 0; i < n; i++)
    {
        int x;
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &x);
        A[i] = x;
    }

    // Variables para determinar el tamaño de los arreglos en funcion de lo ingresado
    int cmayor = 0, cmenor = 0;

    for (int i = 0; i < n; i++)
    {
        if (A[i] > m)
        {
            cmayor++;
        }
        else
        {
            cmenor++;
        }
    }

    int B[cmayor], C[cmenor];
    // LLevo un indice para cada arreglo segun la cantidad de indices
    for (int i = 0, j = 0, k = 0; i < n; i++)
    {
        if (A[i] > m)
        {
            B[j] = A[i];
            j++;
        }
        else
        {
            C[k] = A[i];
            k++;
        }
    }

    // Print en pantalla
    printf("B[%d] = {", cmayor);
    for (int i = 0; i <= cmayor; i++)
    {
        if (i == cmayor)
        {
            printf("}\n");
            break;
        }
        else if (i == cmayor - 1)
        {
            printf("%d", B[i]);
            continue;
        }
        printf("%d,", B[i]);
    }

    printf("C[%d] = {", cmenor);
    for (int i = 0; i <= cmenor; i++)
    {
        if (i == cmenor)
        {
            printf("}");
            break;
        }
        else if (i == cmenor - 1)
        {
            printf("%d", C[i]);
            continue;
        }
        printf("%d,", C[i]);
    }

    return 0;
}