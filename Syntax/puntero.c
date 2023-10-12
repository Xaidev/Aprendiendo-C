/*
    Puntero en c, son la direccion que tendremos en memoria

*/
// int main()
// {
//     int a = 2;
//     // con * podemos declarar un puntero
//     int *apt = &a;
//     printf("%p", apt);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int matriz[2][3];
    int *pmatriz = matriz[0];

    for (int i = 0; i < sizeof(matriz) / sizeof(int); i++)
    {
        printf("\nDato %d: ", i + 1);
        scanf("%d", pmatriz);
        pmatriz++;
    }
    pmatriz = matriz[0];

    for (int i = 0; i < sizeof(matriz) / sizeof(int); i++)
    {
        printf("\n%d", *(pmatriz + i));
    }
    return 0;
}