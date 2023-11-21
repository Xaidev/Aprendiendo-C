#include <stdio.h>

int main(){
    int T;
    scanf(" %d", &T);
    if(T > 1 || T < 100)

    for(int i = 0; i < T; i++){
        int x, y, resultado = 0;
        scanf("%d %d", &x, &y);

        for(int j = 0; j < 100; j++){
            if(j < 10){
                resultado += x;
            }else {
                resultado += y;
            }
        }
        printf("%d\n", resultado);
    }
    return 0;
}