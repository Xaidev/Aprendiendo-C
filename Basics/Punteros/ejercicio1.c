//Crea una función que intercambie el valor de dos variables utilizando punteros. 
#include <stdio.h>

void swap(int *, int *);
int main(){
    int num1, num2;
    printf("Ingresa el primer numero: \n");
    scanf(" %d", &num1);
    
    printf("Ingresa el segundo numero: \n");
    scanf(" %d", &num2);

    printf("El primer numero: %d, El segundo numero: %d \n", num1, num2);
    swap(&num1, &num2);
    printf("Despues del swap: %d y %d\n", num1, num2);


    return 0;
}


void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}