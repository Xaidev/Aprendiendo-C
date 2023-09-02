/*
Your task is to find the sum of all integer numbers lying between 1 and N inclusive.
Input
The input consists of a single integer N that is not greater than 10000 by it's absolute value.
Output
Write a single integer number that is the sum of all integer numbers lying between 1 and N inclusive.
Sample
input	output
-3      -5
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (abs(n) > 10000)
    {
        return 0;
    }

    int resultado = 0;

    if (n <= 0)
    {
        for (int i = 1; i >= n; i--)
        {
            resultado += i;
        }
    }
    else
    {
        for (int i = 0; i <= n; i++)
        {
            resultado += i;
        }
    }
    printf("%d", resultado);
    return 0;
}
