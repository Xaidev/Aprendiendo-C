/*
    Directivas del preprocesador
*/

#include <stdio.h> /*El lenguaje los buscara en la biblioteca standard*/
/* #include "nombre del archivo"  El lenguaje lo buscara en la carpeta en donde estemos, en este caso "Aprendiendo C"*/
#define PI 3.15159      // Son constantes que no cambian en el fichero
#define CUBO(a) a *a *a // Podemos tambien utilizarlo como un macro, mas rapido que la funcion

// Tratar de escribir el nombre de todos los define en mayusculas para comprension

int main()
{

    // int suma;
    // suma = PI + 3;
    int a = 3;
    printf("el cubo de la variable a es: %i ", CUBO(a));
    return 0;
}