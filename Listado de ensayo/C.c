#include <stdio.h>
#include <math.h>

int main(){
    double n, m, a;
    scanf("%lf %lf %lf", &n, &m, &a);
    if(n <= 0 || m <= 0 || a <= 0 || a > 1000000000){
        return 1;
    }
    long long flags = (long long)ceil(n / a) * (long long)ceil(m/a);
    printf("%lld\n", flags);
    return 0;
}