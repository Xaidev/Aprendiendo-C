/*
    Variables
*/
#include <stdio.h>
int main()
{
    char C = 'y';         // tamaño de 1 byte 0...255
    int a = 20;           // 2 bytes -32768 ... 32767
    short e = -2;         // 2 bytes -128 ... 127
    unsigned int b = 25;  // 2 bytes 0 ... 65535
    long l = 50545;       // 4 bytes -2147483648 ... 2147483647
    float f = 43.23;      // 4 bytes
    double d = 1232.5454; // 8 bytes
    printf("%c", C);
    printf("%f", f);
    printf("%.2f", f);
    return 0;
}