#include <stdio.h>

int main(){
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);

    if(k < 1 || w > 1000 || n < 0 || n > 1000000000){
        return 1;
    }

    int c = 0;
    for(int i = 1; i <= w; i++){
        n -= k;
        if (n < 0){
            c += -(n);
        }
    }

    printf("\n%d\n", c);
    return 0;
}