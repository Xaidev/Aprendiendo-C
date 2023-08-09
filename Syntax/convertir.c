/*
    Palabras reservadas y conversion de tipos de datos
*/
#include <stdio.h>
int main()
{
    int a = 80;
    // Printeamos la misma variable conviertiendola en otro tipo de dato
    printf("entero %i\nfloat %.2f\ndouble %.3f\ncaracter %c\n", a, (float)a, (double)a, (char)a);
    // Podremos ver que caracter tendra el valor 80
    float f = 45.3;
    float suma = (float)a + f;
    // Aqui hacemos una operacion convirtiendo la variable int a en float y la sumamos a otro float
    printf("%.2f", suma);
    return 0;
}