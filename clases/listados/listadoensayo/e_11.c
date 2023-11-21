#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generadordearreglos(int largo){
    int *A = malloc(largo * sizeof(int));
    int *B = malloc(largo * sizeof(int));
    int *C = malloc(largo * sizeof(int) * 2);
    srand(time(NULL));

    for(int i = 0; i < largo; i++){
        A[i] = rand() % 15;
        B[i] = rand() % 15;
    }

    for(int i = 0, j = largo; j < largo * 2 &&  i < largo; i++,j++){
        C[i] = A[i];
        C[j] = B[i];
    }

    printf("A = ");
    for(int i = 0; i < largo; i++){
        if(i == largo - 1) printf("%d", A[i]);
        else printf("%d, ", A[i]);
    }printf("\n");

    printf("B = " );
    for(int i = 0; i < largo; i++){
        if(i == largo - 1) printf("%d", B[i]);
        else printf("%d, ", B[i]);
    }printf("\n");

    printf("C = ");
    for(int i = 0; i < largo * 2; i++){
        if(i == largo * 2 - 1) printf("%d", C[i]);
        else printf("%d, ", C[i]);
    }printf("\n");

    free(A);
    free(B);
    free(C);
}

int main(){
    int largo;
    printf("Ingresa el largo del arreglo \n");
    scanf(" %d", &largo);

    generadordearreglos(largo);
    return 0;
}