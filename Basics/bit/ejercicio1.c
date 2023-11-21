//Realiza una función que cuente el número de bits en un entero que están establecidos en 1.
#include <stdio.h>

int cbits(int entero){
    int contador = 0;
    int largo = sizeof(int) * 8;

    for(int i = 0; i < largo; i++, entero >>= 1){
        if(entero & 1){
            contador ++;
        }
    }
    return contador;
}



int main(){
    int entero;
    printf("Ingresa el entero n\n");
    scanf(" %d", &entero);
    int contador = cbits(entero);
    printf("El numero de bits en 1 son: %d\n", contador);
    return 0;
}

