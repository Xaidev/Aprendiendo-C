/*
    Funciones de retorno
*/
#include <stdio.h>
// Debo declarar la funcion al inicio, puedo hacerla antes o despues, pero siempre declarandola antes
int suma();
int main()
{
    int num1, num2;
    printf("Ingresa el primer valor: ");
    scanf("%i", &num1);
    printf("Ingresa el segundo valor: ");
    scanf("%i", &num2);
    printf("el resultado es: %i", suma(num1, num2));
    return 0;
}
int suma(int num1, int num2)
{
    int suma = num1 + num2;
    return suma;
}