#include <stdio.h>

int main(){
    int n;
    printf("Ingrese el valor de n: ");
    scanf(" %d", &n);

    int sl = 2*n+1;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            printf("#");
        }
        for(int j = 0; j < sl-i; j++){ //sl-2*i
            printf(" ");
        }
        for(int j = 0; j < i; j++){
            printf("#");
        }printf("\n");

    }
    for (int i = n; i > 0 ; i--){
        for (int j = 0; j < i ; j++){
            printf("#");
        }
        for (int j = 0; j < sl-i; j++) { //sl-2*i
            printf(" ");
        }
        for(int j = 0; j < i; j++){
            printf("#");
        }printf("\n");       
    }

    return 0;
}