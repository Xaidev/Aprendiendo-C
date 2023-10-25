#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int matriz[n][n];

    int limite = 1;
    int num = 1;
    int fila = 0;
    int col = n - 1;

    while (fila < n)
    {
        for (int i = fila, j = col; i < limite && col >= 0; i++, j++)
        {
            matriz[i][j] = num;
            num++;
        }
        limite++;
        col--;
        if (limite > n)
        {
            limite = n;
        }
        if (col < 0)
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