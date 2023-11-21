#include <stdio.h>
#include <stdlib.h>

int* unpack(int *ArrayA, int* ArrayB);
int main(){

    int A[4] = {10,7,8,3};
    int B[9] = {0,1,0,0,0,1,1,0,1};

    int c = 0;
    for(int i = 0; i < 9; i++){
        if(B[i] == 1){
            c++;
        }
    }
    if(c != 4){
        printf("Los datos y largos no son correctos");
    }
    int* C = unpack(A,B);

    for(int i = 0; i < 9; i++){
        printf("indice %d: %d\n", i, C[i]);
    }
    free(C);
    return 0;
}

int* unpack(int *ArrayA, int* ArrayB){
    int *C = (int *)malloc(9 * sizeof(int));
    for(int i = 0, j = 0; i < 9; i++){
        if(ArrayB[i] == 1){
            C[i] = ArrayA[j];
            j++;
        } else {
            C[i] = 0;
        }
    }
    return C;
}
