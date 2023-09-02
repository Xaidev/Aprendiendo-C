#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arreglo[n];
    int total = 0;
    int t = 0;

    while (1)
    {
        if (n >= 1 && n <= 10)
        {
            for (int i = 0; i < n; i++)
            {
                int m;
                scanf("%d", &m);
                if (m >= 3 && m <= 5)
                {
                    if (m == 3)
                    {
                        t++;
                        arreglo[i] = m;
                        continue;
                    }
                    arreglo[i] = m;
                }
                else
                {
                    return 0;
                }
            }
            for (int i = 0; i < n; i++)
            {
                total += arreglo[i];
            }
            float promedio = (float)total / n;

            if (t != 0)
            {
                printf("None");
                break;
            }
            else if (promedio == 5)
            {
                printf("Named");
                break;
            }
            else if (promedio >= 4.5)
            {
                printf("High");
                break;
            }
            else
            {
                printf("Common");
                break;
            }
        }
    }
    return 0;
}