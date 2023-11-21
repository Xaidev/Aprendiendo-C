
// Escribir una función que cuente el número de bits que se deben cambiar para convertir un número en su forma binaria a 1.

#include <stdio.h>

int contarbits(int num){
    int contador = 0;

    if(num & 1){
        num >>= 1;
    } else {
        contador++;
        num >>= 1;
    }
    for(int i = 0; i < (int)sizeof(int) * 8; i++){
        if(num & 1){
            contador++;
        }
        num >>= 1;
    }
    return contador;
}




int main(){
    int n;
    printf("Ingresa un numero entero: \n");
    scanf(" %d", &n);

    int bitactivo = contarbits(n);
    printf("El numero de bits necesarios para formar a 1 es de %d\n", n, bitactivo);

    return 0;
}

