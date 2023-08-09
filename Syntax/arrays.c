/*
    Arreglos en C
*/
#include <stdio.h>
/*int main()
{
    int arreglo[4] = {3, 2, 4, 1};
    printf("%i\n", arreglo[2]);
    return 0;
}
*/

/*
int main()
{
    // Arreglo de una dimension
int sizeA;
    printf("tamaño del arreglo: ");
    scanf("%i", &sizeA);
    int age[sizeA];
    for (int i = 0; i < sizeA; i++)
    {
        printf("ingresa el valor %i\n", i + 1);
        scanf("%i", &age[i]);
    }
    printf("Los valores del arreglo son:\n");
    for (int i = 0; i < sizeA; i++)
    {
        printf("%i-\n", age[i]);
    }
    return 0;
}
*/

int main()
{
    // arreglo de dos dimensiones
    int multi[2][3] = {{5, 3, 1}, {6, 4, 2}};
    printf("%i\n", multi[1][1]);
    return 0;
}
