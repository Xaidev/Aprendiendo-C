#include <stdio.h>

int nesimo(int n, int a, int b, int c){
    if(n == 1){
        return a;
    } else if(n == 2) {
        return b;
    } else if (n == 3) {
        return c;
    }
    return nesimo(n-1, a, b, c) + nesimo(n-2, a, b, c) + nesimo(n-3, a, b, c);
}



int main(){
    int n, a, b, c;
    scanf("%d", &n);

    if(n < 1 || n > 20){
        return 1;
    }

    scanf("%d %d %d", &a, &b, &c);
    if(a < 1 || a > 100 ||  b < 1 || b > 100 || c < 1 || c > 100){
        return 1;
    }

    int resultado = nesimo(n, a, b, c);
    printf("%d", resultado);

    return 0;
}