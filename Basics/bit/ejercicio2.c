//Implementa una función que invierta los bits de un número entero.
#include <stdio.h>

int invertir(int n){
    return ~n;
}



int main(){
    int entero;
    printf("Ingresa el numero entero \n");
    scanf(" %d", &entero);

    int invertido = invertir(entero);
    printf("El numero invertido en bits de %d es: %d \n", entero, invertido);
    
    return 0;
}