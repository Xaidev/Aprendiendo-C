// Desarrolla un programa que aloje dinámicamente una matriz y realice una multiplicación de matrices.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** crearMatriz(int tamaño){
    int** Array = malloc(tamaño * sizeof(int*));
    for(int i = 0; i < tamaño; i++){
        Array[i] = malloc(tamaño * sizeof(int));
    }
    return Array;
}

void asignarValores(int** Array,int tamaño){
    srand(time(NULL));
    for(int i = 0; i < tamaño; i++){
        for(int j = 0; j < tamaño; j++){
            if(rand() % 2 == 0){
                Array[i][j] = (rand() % 15) * -1;
            } else {
                Array[i][j] = rand() % 15;
            }   
        }
    }
}

int** multiplicacion (int** A, int** B,int** C, int tamaño){
    for(int fila = 0; fila < tamaño; fila++){
        for(int columna = 0; columna < tamaño; columna++){
            C[fila][columna] = 0;
            for(int k = 0; k < tamaño; k++){
                C[fila][columna] += A[fila][k] * B[k][columna];
            }
        }
    }
    return C;
} 

void liberarMemoria(int** array, int tamaño){
    for(int i = 0; i < tamaño; i++){
        free(array[i]);
    }
    free(array);
}

void imprimirMatriz(int **array, int tamaño){
    for(int i = 0; i < tamaño; i++){
        for(int j = 0; j < tamaño; j++){
            if(j == tamaño - 1){
                printf("%d", array[i][j]);
                printf("\n");
            } else {
                printf("%d, ", array[i][j]);
            }
        }
        printf("    ");
    }printf("\n");
}

int main(){
    int tamaño;
    printf("Ingresa el tamaño de las matrices \n");
    scanf("%d", &tamaño);

    int **A = crearMatriz(tamaño);
    int **B = crearMatriz(tamaño);
    int **C = crearMatriz(tamaño);

    asignarValores(A, tamaño);
    asignarValores(B, tamaño);

    multiplicacion(A, B, C, tamaño);

    printf("A = ");
    imprimirMatriz(A, tamaño);
    printf("B = ");
    imprimirMatriz(B, tamaño);
    printf("C = ");
    imprimirMatriz(C, tamaño);


    liberarMemoria(A, tamaño);
    liberarMemoria(B, tamaño);
    liberarMemoria(C, tamaño);

    return 0;
}
