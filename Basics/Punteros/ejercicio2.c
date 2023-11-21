// Desarrolla una función que encuentre el elemento máximo en un arreglo utilizando punteros.
#include <stdio.h>

int mayorelemento(int *A, int largo){
    int min = -1000000, pos = 0;
    for(int i = 0; i < largo; i++){
        if(*(A + i) > min){
            min = *(A + i);
            pos = i;
        }
    }
    return pos;
}

int main(){
    int A[6] = {1,3,5,10,2,300};
    int largo = (int)sizeof(A) / sizeof(int);

    int mayor = mayorelemento(A, largo);
    printf("La posicion del mayor elemento es : %d\n", mayor);
    return 0;
}