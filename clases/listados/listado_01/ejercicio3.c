#include <stdio.h>
int main()
{
    int m, n;
    printf("Ingresa el numero a comparar:\n");
    scanf("%d", &m);
    printf("Ingresa la cantidad de numeros que compararas:\n");
    scanf("%d", &n);
    int arreglo[n];

    // Cantidad de n numeros que se piden
    for (int i = 0; i < n; i++)
    {
        int x; // variable local para agregar el numero en el arreglo
        printf("Ingresa el numero %d:\n", i + 1);
        scanf("%d", &x);
        arreglo[i] = x;
    }

    // n comparaciones con el numero m
    for (int i = 0; i < n; i++)
    {
        // en el caso de ser mayor el numero n se muestra en pantalla
        if (arreglo[i] > m)
        {
            printf("%d ", arreglo[i]);
        }
    }

    return 0;
}
