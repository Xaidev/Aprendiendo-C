#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int meses = 12, regiones = 16, años = 15;

	int precipitacion[meses][regiones][años];
	int promedio[meses][regiones];

	srand(time(NULL));

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

	for (int i = 0; i < meses; i++)
	{
		for (int j = 0; j < regiones; j++)
		{
			int suma = 0;
			for (int k = 0; k < años; k++)
			{
				suma += precipitacion[i][j][k];
			}
			promedio[i][j] = suma / años;
		}
	}

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
