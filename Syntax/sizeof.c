/*
    Operador sizeof en C para determinar el tamaño en bytes
*/
#include <stdio.h>
size_t getsize(float *ptr);
int main()
{
    float array[20];
    printf("El numero en bytes es: %lu \n", sizeof(array));
    printf("El numero de bytess por getsize es : %lu\n", getsize(array));
    return 0;
}
size_t getsize(float *ptr)
{
    return sizeof(ptr);
}

/*
    size_t getsize(float *ptr)    
{
    return sizeof(float) * 20; // Suponiendo que el arreglo tiene 20 elementos
}
*/