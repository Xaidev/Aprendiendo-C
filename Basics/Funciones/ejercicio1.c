// Escribe una función para calcular el factorial de un número entero de forma recursiva.
#include <stdio.h>

int factorial(int n){
    if (n == 1) return 1;
    return n * factorial(n-1);
}

int main(){
    int entero;
    printf("Ingresa el numero entero\n");
    scanf(" %d", &entero);
    int resultado = factorial(entero);
    printf("El factorial de %d es %d\n", entero, resultado);
    return 0;
}