#include <stdio.h>

int main()
{
    int metro_minuto, total;
    printf("Ingresa la rapidez\n");
    scanf("%d", &metro_minuto);

    for (int i = 0; i <= 9; i++)
    {
        total += metro_minuto;
        if (total >= 3700)
        {
            printf("Con x=%d se logra llegar a tiempo", metro_minuto);
            break;
        }
    }

    if (total < 3700)
    {
        printf("Con x=%d el permiso vencera", metro_minuto);
    }
    return 0;
}
