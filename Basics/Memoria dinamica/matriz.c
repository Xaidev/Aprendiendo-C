#include <stdio.h>
#include <stdlib.h>

int main(){
    int fila, columna;
    printf("Ingresa el tamaño de las filas y columans \n");
    scanf("%d %d", &fila, &columna);

    int **pArray;

    pArray = malloc(fila * sizeof(int*));

    for(int i = 0 ; i < fila; i++)
    {
        pArray[i] = malloc(columna * sizeof(int));
    }

    for(int i = 0; i < fila; i++)
        for(int j = 0; j < columna; j++){
            int x;
            printf("Elige el valor en la fila %d y columna %d: ", i,j);
            scanf("%d", &x);
            pArray[i][j] = x;
            printf("\n");
        }

    printf("Valores ingresados: \n");
    for(int i = 0; i < fila; i++)
        for(int j = 0; j < columna; j++){
            printf("El valor de la fila %d y columna %d es %d \n", i, j , pArray[i][j]);
        }
    
    for(int i = 0; i < fila; i++){
        free(pArray[i]);
    }

    free(pArray);
    return 0;
}