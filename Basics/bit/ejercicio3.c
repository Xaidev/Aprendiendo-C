//Crea una función que verifique si un número es par o impar utilizando operaciones a nivel de bits.
#include <stdio.h>

void paridad(int n){
    if (n & 1) printf("Es impar\n"); 
    else printf("Es par\n");
}


int main(){
    int entero;
    printf("Ingresa un entero \n");
    scanf(" %d", &entero);
    paridad(entero);

    return 0;
}