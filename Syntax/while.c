/*
    Ciclo While en C
*/
#include <stdio.h>
int main()
{
    // Podemos asignarle un valor antes al contador, pero si no le asignamos valor comenzara en 0
    int contador;
    int contador2 = 4;
    while (contador <= 10)
    {
        printf("%i\n", contador);
        contador++;
    }
    return 0; // termina el programa
}