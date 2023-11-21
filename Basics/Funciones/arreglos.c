#include <stdio.h>
#include <stdlib.h>

int* crearArreglo(int num){
    int* pArray = malloc(num * sizeof(int));
    return pArray;
}

void llenarArreglo(int *array, int num){
    for(int i = 0; i < num; i++){
        int x;
        printf("Ingresa tu numero%d : ", i + 1);
        scanf("%d", &x);
        printf("\n");
        array[i] = x;
    }
}

void imprimirArreglo(int *array, int num){
    for(int i = 0; i < num; i++){
        if (i == num-1){
            printf("%d", array[i]);
            break;
        } else {
            printf("%d ", array[i]);
        }
    }
}

int main(){
    int *miArreglo;
    int n;
    printf("Ingresa el tamaño del arreglo y cantidad de elementos; \n");
    scanf("%d", &n);
    
    miArreglo = crearArreglo(n);
    llenarArreglo(miArreglo, n);
    imprimirArreglo(miArreglo, n);

    free(miArreglo);

    return 0;
}

