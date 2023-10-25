#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int promedioregional[16]; // Guardo el promedio regional
    int promedioanual[15];    // Promedio anual

    // Ciclo para cada año
    for (int i = 0; i < 15; i++)
    {
        // Ciclo para cada region
        for (int j = 0; j < 16; j++)
        {
            int suma = 0; // Creo una variable auxiliar para el promedio del año en cada region
            // Ciclo para cada año
            for (int k = 0; k < 12; k++)
            {
                suma += rand() % 101;
            }
            promedioregional[j] = suma / 12; // Saco el promedio de la region ese mes
        }

        int año = 0; // Inicializo una variable para guardar el promedio de toda la region actual
        for (int k = 0; k < 16; k++)
        {
            año += promedioregional[k];
        }
        año /= 16;
        promedioanual[i] = año; // Guardo el promedio anual de esa region
    }

    // int promedio = 0; // Promedio de los ultimos 15 años
    // for (int i = 0; i < 15; i++)
    // {
    //     promedio += promedioanual[i]; // Sumo todos los promedios de los años
    // }
    // promedio /= 15; // El promedio será la suma dividido la cantidad de años

    // printf("El promedio de precipitacion mensual de los ultimos 15 años es: %d\n", promedio);

    for (int i = 0; i < 15; i++)
    {
        printf("El promedio mensual del año %d es: %d\n", i + 1, promedioanual[i]);
    }

    return 0;
}