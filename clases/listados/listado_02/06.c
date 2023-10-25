// Escriba un programa que, dado un número entero entre 0 y 255, imprima su representación como:

// Caracter
// Entero sin signo
// Octal
// Hexadecimal

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Ingresa el entero, debe estar en el rango de 0 a 255: \n");
    scanf("%d", &n);

    // Verifico que el numero ingresado este dentro del rango
    if (n > 255 || n < 0)
    {
        printf("El numero ingresado no esta dentro del rango\n");
        exit(1);
    }

    int i = 0, k = 0; // Indices del numero octal y hexa respectivamente
    int octal[999];
    int hexa[999];
    int aux = n; // auxiliar para transformar el entero n a octal y hexadecimal

    // Ciclo de transformacio na octogonal
    while (aux != 0)
    {
        octal[i] = aux % 8;
        aux /= 8;
        i++;
    }
    aux = n; // reseteo la variable auxiliar para transformar a hexadecimal

    // Ciclo de transformacion a hexadecimal
    while (aux != 0)
    {
        hexa[k] = aux % 16;
        aux /= 16;
        k++;
    }

    // Print en pantalla
    printf("Para %d: caracter '%c', entero sin signo %i, octal ", n, n, (unsigned int)n);
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }
    printf(" y hexadecimal ");
    for (int j = k - 1; j >= 0; j--)
    {
        printf("%d", hexa[j]);
    }
    return 0;
}
