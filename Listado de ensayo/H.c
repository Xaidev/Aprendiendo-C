#include <stdio.h>
#include <limits.h>

unsigned int invertir(unsigned int n);
int main(){
    int q;
    scanf("%d", &q);
    if(q > 100 || q < 1){
        return 1;
    }
    for(int i = 0; i < q; i++){
        unsigned int n;
        scanf("%u", &n);

        if (n > UINT_MAX){
            continue;
        }
        unsigned int resultado = invertir(n);
        printf("%u\n", resultado);
    }
    return 0;
}

unsigned int invertir(unsigned int n){
    return ~n;
}

