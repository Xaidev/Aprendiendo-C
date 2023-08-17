/*
    Punteros funcionamiento
*/
#include <stdio.h>
void cubo(int *n);
int main()
{
    int num = 5;
    printf("Primer valor: %i\n", num);
    cubo(&num);
    printf("Nuevo valor: %i", num);
    return 0;
}
void cubo(int *n)
{
    *n = *n * *n * *n;
}
