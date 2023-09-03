#include <stdio.h>

int main()
{
    int n; // Cantidad de notas
    scanf("%d", &n);
    int arreglo[n]; // Creo un arreglo que registra las notas
    int total = 0;
    int t = 0;

    while (1)
    {
        // Verificador
        if (n >= 1 && n <= 10)
        {
            // Registro las notas
            for (int i = 0; i < n; i++)
            {
                int m;
                scanf("%d", &m);
                // Verifico que las notas enten en el rango correcto
                if (m >= 3 && m <= 5)
                {
                    // Hago un contador de notas satisfactorias
                    if (m == 3)
                    {
                        t++;
                        arreglo[i] = m;
                        continue;
                    }
                    arreglo[i] = m;
                }
                else
                {
                    return 0;
                }
            }
            // Cuento todas las notas
            for (int i = 0; i < n; i++)
            {
                total += arreglo[i];
            }

            // Saco el promedio
            float promedio = (float)total / n;

            // Casos desde el mas especifico hasta el mas general
            if (t != 0)
            {
                printf("None");
                break;
            }
            else if (promedio == 5)
            {
                printf("Named");
                break;
            }
            else if (promedio >= 4.5)
            {
                printf("High");
                break;
            }
            else
            {
                printf("Common");
                break;
            }
        }
    }
    return 0;
}