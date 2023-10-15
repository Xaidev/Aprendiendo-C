#include <stdio.h>

#define NEGRO 1 << 0
#define BLANCO 1 << 1
#define VERDE 1 << 3
#define AMARILLO 1 << 2

void operacion(unsigned char colores)
{
    
}

int main()
{
    operacion(NEGRO | VERDE | BLANCO);
    return 0;
}
