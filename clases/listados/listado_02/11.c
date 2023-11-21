#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int matriz[n][n];

    int limite = 1;  // limite que tomara la matriz
    int num = 1;     // numero que pondre en la matriz
    int fila = 0;    // Fila de inicio
    int col = n - 1; // Columna de inicio

    // Ciclo para leer toda la matriz
    while (fila < n)
    {
        // Ciclo para agregar a la matriz el numero correspondiente
        for (int i = fila, j = col; i < limite && col >= 0; i++, j++)
        {
            matriz[i][j] = num;
            num++;
        }
        limite++;       // limite tendra un aunmento en funcio a la cantida de interaciones
        col--;          // Columna de inicio le resto 1 agregar el numero donde corresponde
        if (limite > n) // Si el limite llega a superar n significa que esta en la ultima fila, reseteo el valor
        {
            limite = n;
        }
        if (col < 0) // si columna llega a 0 significa que esta en la ultima columna, reseteo el valor y aunmento la fila en 1 para tener el nuevo indice
        {
            col = 0;
            fila++;
        }
    }

    // Print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}