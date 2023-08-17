#include <stdio.h>
struct perro
{
    /* data */
    char nombre[30];
    int edad_meses;
    float peso;
} perro1 = {"Pero", 12, 4.3},
  perro2 = {"python", 10, 4.1};

int main()
{
    printf("el nombre de mi mascota es: %s \n", perro1.nombre);
    printf("El peso de %s es %.2f Kg y tiene %i meses \n", perro1.nombre, perro1.peso, perro1.edad_meses);
    return 0;
}
