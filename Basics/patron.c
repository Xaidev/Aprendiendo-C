/*
Imprima un patrón de números desde hasta como se muestra a continuación. Cada uno de los números está separado por un solo espacio.

                            4 4 4 4 4 4 4
                            4 3 3 3 3 3 4
                            4 3 2 2 2 3 4
                            4 3 2 1 2 3 4
                            4 3 2 2 2 3 4
                            4 3 3 3 3 3 4
                            4 4 4 4 4 4 4
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int numero = n;

    for (int i = 0; i < ((numero * 2) - 1) / 2; i++)
    {
        if (i > 0)
        {
            for (int k = 0; k < i; k++)
            {
                printf("%d ", numero - k);
            }
        }
        for (int j = 1; j <= (numero * 2) - i * 2; j++)
        {
            if (j == (numero * 2) - i * 2)
            {
                for (int l = 1; l <= i; l++)
                {
                    printf("%d ", n + l);
                }
                break;
            }
            printf("%d ", n);
        }
        n--;
        printf("\n");
    }

    for (int i = ((numero * 2) - 2) / 2; i >= 0; i--)
    {
        if (i > 0)
        {
            for (int k = 0; k < i; k++)
            {
                printf("%d ", numero - k);
            }
        }
        for (int j = 1; j <= (numero * 2) - i * 2; j++)
        {
            if (j == (numero * 2) - i * 2)
            {
                for (int l = 1; l <= i; l++)
                {
                    printf("%d ", n + l);
                }
                break;
            }
            printf("%d ", n);
        }
        n++;
        printf("\n");
    }

    return 0;
}
