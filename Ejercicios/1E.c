#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n < 1 || n > 100){
        return 1;
    }

    int hard = 0;
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        if(x == 1){
            hard++;
        }
    }

    if(hard > 0){
        printf("HARD");
    } else {
        printf("EASY");
    }

    return 0;
}