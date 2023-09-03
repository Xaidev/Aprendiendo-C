#include <stdio.h>

int main()
{
    int n, m;
    printf("Ingresa numero n\n");
    scanf("%d", &n);
    printf("Ingrersa numero m\n");
    scanf("%d", &m);

    // Calcular los modulos
    for (int i = 1; i <= n; i++)
    {
        int x = i % m;
        printf("%d ", x);
    }
    return 0;
}
