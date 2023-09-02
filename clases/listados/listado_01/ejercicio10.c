#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Ingresa n\n");
    scanf("%d", &n);
    for (float i = 1; i <= n; i++)
    {
        if (i > 0 && i <= 5)
        {
            int x = 2 * i;
            if (i == n)
            {
                printf("%d", x);
                break;
            }
            printf("%d, ", x);
        }
        else if (i > 5 && i <= 13)
        {
            int x = pow(i, 2) - 3 * i + 2;
            if (i == n)
            {
                printf("%d", x);
            }
            printf("%d, ", x);
        }
        else
        {
            float x = (100 / i) + 3;
            if (i == n)
            {
                printf("%0.2f", x);
                break;
            }
            printf("%0.2f, ", x);
        }
    }
    return 0;
}