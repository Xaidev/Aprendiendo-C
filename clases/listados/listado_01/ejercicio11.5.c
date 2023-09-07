#include <stdio.h>

int main()
{
    int n; // Declaro la cantidad de notas
    scanf("%d", &n);

    if (n < 1 || n > 10)
    {
        return 0;
    }

    float promedio;   // Variable donde guardare el promedio de todas la notas
    int auxiliar = 0; // Variable que contara cuantas notas minimas tengo

    for (int i = 0; i < n; i++)
    {
        int x; // Variable local
        scanf("%d", &x);
        if (x < 3 || x > 5) // Verificador para que no sea menor a 3 o mayor a 5
        {
            return 0;
        }
        if (x == 3) // Cuento notas minimas
        {
            auxiliar++;
        }
        promedio += x; // Voy sumando
    }
    promedio = (float)promedio / n; // Saco el promedio

    if (auxiliar != 0) // Voy desde el caso mas especifico hasta el mas general
    {
        printf("None");
    }
    else if (promedio == 5)
    {
        printf("Named");
    }
    else if (promedio >= 4.5)
    {
        printf("High");
    }
    else
    {
        printf("Common");
    }

    return 0;
}