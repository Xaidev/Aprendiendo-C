#include <stdio.h>

// Función que modifica el valor de una variable mediante un apuntador
void modificarPorApuntador(int *ptr)
{
    *ptr = 20;
}

int main()
{
    int num = 10;
    // int *ptr = &num sera exactamente lo mismo, solo que declare la variable ptr antes

    printf("Valor antes de modificarPorApuntador: %d\n", num);
    modificarPorApuntador(&num); // Llamado por referencia
    // modificarPorApuntador(ptr); para que surja efecto, seria un llamado normal de la funcion
    printf("Valor despues de modificarPorApuntador: %d\n", num);

    return 0;
}
