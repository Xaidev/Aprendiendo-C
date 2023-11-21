#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int meses = 12, regiones = 16, años = 15;

	int precipitacion[meses][regiones][años]; // matriz de 3 dimesiones
	int promedio[meses][regiones];			  // Promedio mensual anual

	srand(time(NULL)); // Generador semi aleatorio

	// Ciclo para llenar la matriz de numeros aleatorios
	for (int i = 0; i < años; i++)
	{
		for (int j = 0; j < meses; j++)
		{
			for (int k = 0; k < regiones; k++)
			{
				precipitacion[j][k][i] = rand() % 101;
			}
		}
	}

	// Calculo el promedio anual con la suma
	for (int i = 0; i < meses; i++)
	{
		for (int j = 0; j < regiones; j++)
		{
			int suma = 0;
			for (int k = 0; k < años; k++) // Calculo el promedio mensual de la region cada año
			{
				suma += precipitacion[i][j][k];
			}
			promedio[i][j] = suma / años;
		}
	}

	// Print del promedio anual mensual de los 12 meses por region
	for (int i = 0; i < meses; i++)
	{
		printf("Mes %d: \n", i + 1);
		for (int j = 0; j < regiones; j++)
		{
			printf("Region %d: %d\n", j + 1, promedio[i][j]);
		}
	}

	return 0;
}
