// Escribe un programa que aloje dinámicamente un arreglo de enteros y permita al usuario ingresar valores.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamaño;
    printf("Ingresa el tamaño del arreglo \n");
    scanf(" %d", &tamaño);

    int *pArray = malloc(tamaño * sizeof(int));
    if(pArray == NULL){
        printf("Fallo al asignar memoria \n");
        return -1;
    }

    for(int i = 0; i < tamaño; i++){
        int aux;
        printf("Ingresa el numero %d: \n", i + 1);
        scanf(" %d", &aux);
        pArray[i] = aux;
    }

    free(pArray);
    return 0;
}
