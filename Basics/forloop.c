#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    // Complete the code.
    int x = 0;
    int y = 0;
    if (abs(a) <= abs(b))
    {
        x = abs(a);
        y = abs(b);
    }
    else
    {
        x = abs(b);
        y = abs(a);
    }

    if (x > abs(b - a))
    {
        for (int i = x; i > abs(b - a); i++)
        {
            if (i > y)
            {
                break;
            }
            if (i > 9)
            {
                if (i % 2 == 0)
                {
                    printf("even\n");
                }
                else
                {
                    printf("odd\n");
                }
            }
            else if (i >= 1)
            {
                switch (i)
                {
                case 1:
                    printf("one");
                    break;
                case 2:
                    printf("two");
                    break;
                case 3:
                    printf("three");
                    break;
                case 4:
                    printf("four");
                    break;
                case 5:
                    printf("five");
                    break;
                case 6:
                    printf("six");
                    break;
                case 7:
                    printf("seven");
                    break;
                case 8:
                    printf("eight");
                    break;
                case 9:
                    printf("nine");
                    break;
                }
                printf("\n");
            }
        }
    }
    else
    {

        for (int i = x; i <= abs(b); i++)
        {
            if (i > y)
            {
                break;
            }
            if (i > 9)
            {
                if (i % 2 == 0)
                {
                    printf("even\n");
                }
                else
                {
                    printf("odd\n");
                }
            }
            else if (i >= 1)
            {
                switch (i)
                {
                case 1:
                    printf("one");
                    break;
                case 2:
                    printf("two");
                    break;
                case 3:
                    printf("three");
                    break;
                case 4:
                    printf("four");
                    break;
                case 5:
                    printf("five");
                    break;
                case 6:
                    printf("six");
                    break;
                case 7:
                    printf("seven");
                    break;
                case 8:
                    printf("eight");
                    break;
                case 9:
                    printf("nine");
                    break;
                }
                printf("\n");
            }
        }
    }

    return 0;
}
