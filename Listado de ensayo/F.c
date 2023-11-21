#include <stdio.h>

int main(){
    int n;
    printf("Ingresa el sentimiendo de hulk: \n"); 
    scanf("%d", &n);
    if(n < 1 || n > 100){
        return 1;
    }
    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            printf("I hate");
        } else {
            printf("I love");
        }
        if(i < n){ 
            printf(" that ");
        }
    }

    printf(" it");

    return 0;
}
