#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    // Write your code here.
    int x, y, z;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int and = i & j;
            int or = i | j;
            int xor = i ^ j;
            if (and < k && x < and)
            {
                x = and;
            }
            if (or < k && y < or)
            {
                y = or ;
            }
            if (xor <= k && z < xor)
            {
                z = xor;
            }
        }
    }
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d", z);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
