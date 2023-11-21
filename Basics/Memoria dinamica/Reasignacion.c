#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 5;
    int *pArray = malloc(size * sizeof(int));

    int i = 0;
    while(1){
        int x;
        printf("Ingresa el valor %d: ", i+1);
        scanf("%d", &x);
        printf("\n");

        pArray[i] = x;
        i++;
        if(x == 0){
            free(pArray);
            return 0;
        }

        if (i >= size- 1 ){
            size *= 2;
            int *temp = realloc(pArray, size * sizeof(int));
            if(temp == NULL){
                printf("Error al asignar memoria\n");
                free(pArray);
                return 1;
            } else {
                pArray = temp;
            }
        }
    }
    free(pArray);
    return 0;
}