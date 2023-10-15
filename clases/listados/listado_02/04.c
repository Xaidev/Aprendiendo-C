// Escriba un programa que pida ingresar una matriz de 9x9 y
// verifique si es una solución válida para el juego Sudoku. Nota: Averiguar las reglas del juego es parte de la pregunta.

// Ejemplos

// - La siguiente matriz es una solución válida

// int M = {{5, 3, 4, 6, 7, 8, 9, 1, 2},
//          {6, 7, 2, 1, 9, 5, 3, 4, 8},
//          {1, 9, 8, 3, 4, 2, 5, 6, 7},
//          {8, 5, 9, 7, 6, 1, 4, 2, 3},
//          {4, 2, 6, 8, 5, 3, 7, 9, 1},
//          {7, 1, 3, 9, 2, 4, 8, 5, 6},
//          {9, 6, 1, 5, 3, 7, 2, 8, 4},
//          {2, 8, 7, 4, 1, 9, 6, 3, 5},
//          {3, 4, 5, 2, 8, 6, 1, 7, 9}};
// - La siguiente matriz no es una solución válida

// int M = {{5, 3, 4, 6, 7, 8, 1, 9, 2},
//          {6, 7, 2, 1, 9, 5, 3, 4, 8},
//          {1, 9, 8, 3, 4, 2, 5, 6, 7},
//          {8, 5, 9, 7, 6, 1, 4, 2, 3},
//          {4, 2, 6, 8, 5, 3, 7, 9, 1},
//          {4, 1, 3, 9, 2, 7, 8, 5, 6},
//          {9, 6, 1, 5, 3, 7, 2, 8, 4},
//          {2, 8, 7, 4, 1, 9, 6, 3, 5},
//          {9, 4, 5, 2, 8, 6, 1, 7, 3}};

#include <stdio.h>

int main()
{

    int matriz[9][9];
    int *pmatriz = matriz[0];

    // Lleno la matriz
    for (int i = 0; i < 9; i++)
    {
        printf("Ingresa el elemento %d de la matriz 9x9\n", i + 1);
        scanf("%d %d %d %d %d %d %d %d %d", pmatriz);
        pmatriz += 9;
    }
    pmatriz = matriz[0]; // Regreso al primer elemento de la matriz

    // Imprimo la matriz
    for (int i = 0; i < 9 * 9; i++)
    {
        printf("%d ", *pmatriz);
        if (i % 9 == 8)
        {
            printf("\n");
        }
        pmatriz++;
    }

    int c = 0; // Contador de numeros repetidos

    // Verifico numeros repetidos por cada fila
    for (int fila = 0; fila < 9; fila++)
    {
        for (int columna = 0; columna < 9; columna++)
        {
            // Elemento que comparare
            int elementoactual = matriz[fila][columna];

            // Ciclo para comparar con el siguiente elemento de la fila
            for (int scolumna = columna + 1; scolumna < 9; scolumna++)
            {
                if (matriz[fila][scolumna] == elementoactual)
                {
                    c++; // Si se repite algun elemento se le suma 1
                }
            }
        }
    }

    // Verifico numeros repetidos por cada columna
    for (int columna = 0; columna < 9; columna++)
    {
        for (int fila = 0; fila < 9; fila++)
        {
            // Elemento que comparare
            int elementoactual = matriz[fila][columna];

            // Ciclo que compara el siguiente elemento de la columna
            for (int sfila = fila + 1; sfila < 9; sfila++)
            {
                if (matriz[sfila][columna] == elementoactual)
                {
                    c++; // Si se repite algun elemento se le suma 1
                }
            }
        }
    }

    // Si se repite algun elemento la matriz ingresada no es valida
    if (c > 0)
    {
        printf("La matriz no es una solucion valida\n");
    }
    else // Caso contrario es valida
    {
        printf("La matriz es una solucion valida\n");
    }

    return 0;
}