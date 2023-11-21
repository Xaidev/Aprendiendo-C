// Desarrolla una función para sumar dos matrices de igual tamaño.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void asignarValores(int **matriz, int valor, int tamaño);
int** crearMatriz(int tamaño);
void liberarMemoria(int** matriz, int tamaño);
void sumamatriz(int tamaño);

int main(){
    int tamaño;
    printf("Ingresa el tamaño de las matrices:\n");
    scanf(" %d", &tamaño);
    sumamatriz(tamaño);
    return 0;
}

void asignarValores(int **matriz, int valor, int tamaño){
    for(int i = 0; i < tamaño; i++)
        for(int j = 0; j < tamaño; j++){
            matriz[i][j] = rand() % valor;
        }
}

int** crearMatriz(int tamaño){
    srand(time(NULL));
    int** matriz = malloc(tamaño * sizeof(int*));

    for(int i = 0; i < tamaño; i++){
        matriz[i] = malloc(tamaño * sizeof(int));
    }
    return matriz;
}

void liberarMemoria(int** matriz, int tamaño){
    for(int i = 0; i < tamaño; i++){
        free(matriz[i]);
    }
    free(matriz);
}

void sumamatriz(int tamaño){
    int valor;
    printf("Ingresa el numero maximo que puede tomar el random:\n");
    scanf(" %d", &valor);

    int **A = crearMatriz(tamaño);
    int **B = crearMatriz(tamaño);
    int **C = crearMatriz(tamaño);

    asignarValores(A, valor, tamaño);
    asignarValores(B, valor, tamaño);

    for(int i = 0; i < tamaño; i++){
        for(int j = 0; j < tamaño; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("A = ");
    for(int i = 0; i < tamaño; i++){
        for(int j = 0; j < tamaño; j++){
            if(j != tamaño - 1){
                printf("%d, ", A[i][j]);
            } else {
                printf("%d", A[i][j]);
                printf("\n");
            }
        }
        printf("    ");
    }printf("\n");

    printf("B = ");
    for(int i = 0; i < tamaño; i++){
        for(int j = 0; j < tamaño; j++){
            if(j != tamaño - 1){
                printf("%d, ", B[i][j]);
            } else {
                printf("%d", B[i][j]);
                printf("\n");
            }
        }
        printf("    ");
    }printf("\n");

    printf("C = ");
    for(int i = 0; i < tamaño; i++){
        for(int j = 0; j < tamaño; j++){
            if(j != tamaño - 1){
                printf("%d, ", C[i][j]);
            } else {
                printf("%d", C[i][j]);
                printf("\n");
            }
        }
        printf("    ");
    }printf("\n");

    liberarMemoria(A, tamaño);
    liberarMemoria(B,tamaño);
    liberarMemoria(C, tamaño);
    }