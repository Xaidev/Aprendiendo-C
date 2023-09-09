#include <stdio.h>
#include <math.h>

int main()
{
    int n, resultado = 0;
    scanf("%d", &n);

    // Verificador
    if (abs(n) > 10000)
    {
        return 0;
    }

    // Si n<=0 entonces contara de 1 hasta n
    if (n <= 0)
    {
        for (int i = 1; i >= n; i--)
        {
            resultado += i;
        }
    }
    // Si n>0 entonces contara de 0 hasta n
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