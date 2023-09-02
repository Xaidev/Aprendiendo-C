#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 1 || n > 10)
    {
        return 0;
    }

    float promedio;
    int auxiliar = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x < 3 || x > 5)
        {
            return 0;
        }
        if (x == 3)
        {
            auxiliar++;
        }
        promedio += x;
    }
    promedio = (float)promedio / n;

    if (auxiliar != 0)
    {
        printf("None");
    }
    else if (promedio == 5)
    {
        printf("Named");
    }
    else if (promedio >= 4.5)
    {
        printf("High");
    }
    else
    {
        printf("Common");
    }

    return 0;
}