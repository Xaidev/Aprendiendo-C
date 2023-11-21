#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Ingresa el tamaño de la matriz\n");
    scanf("%d", &n);

    int* pArray = malloc(n * sizeof(int));

    for(int i = 0; i < n ; i++){
        int x;
        printf("Ingresa el entero %d\n", i+1);
        scanf("%d", &x);
        pArray[i] = x;
    }
 
    for(int i = 0; i < n; i++){
        if(i == n-1){
            printf("%d", pArray[i]);
            break;
        } else {
            printf("%d, ", pArray[i]);            
        }
    }    

    free(pArray);
    return 0;
}