/*
    Ciclo Do While
*/
#include <stdio.h>
int main()
{
    int contador = 1;
    // Primero ejecutaremos el programa
    do
    {
        printf("$i\n", contador);
        contador++;
        // Luego iremos a la condicion y si se cumple no volvera
    } while (contador <= 10);
    return 0;
}