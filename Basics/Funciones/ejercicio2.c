// Implementa una función que determine si un número es primo.
#include <stdio.h>

int esPrimoRecursivo(int n, int divisor) { //retorna un 1 en caso de ser primo, 0 en caso de no ser primo
    if (divisor <= 1) {
        return 1;  // Caso base: 1 es primo
    }

    if (n % divisor == 0) {
        return 0;  // Si encontramos un divisor, el número no es primo
    }

    return esPrimoRecursivo(n, divisor - 1);  // Llamada recursiva con divisor disminuido en 1
}


void primo(int n){
    if (n == 1){
        printf("El numero es primo\n");
    } else {
        int divisores = 0;
        for(int i = 1; i <= n; i++){
            if(n % i == 0)
                divisores++;
        }
        if(divisores == 2){
            printf("El numero es primo\n");
        } else {
            printf("El numero no es primo\n");
        }
    }
}

int main(){
    int entero;
    printf("Ingresa un numero entero: \n");
    scanf(" %d", &entero);
    if(entero <= 0){
        printf("El numero debe ser mayor a 0 \n");
        return 1;
    }
    primo(entero);


    return 0;
}



