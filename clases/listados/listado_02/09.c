// Escriba un programa que pida dos números n y m, para luego pedir n cadenas de caracteres.
// El programa deberá generar una cadena de caracteres como resultado de la concatenación de los primeros m caracteres de cada cadena.
// El programa debe verificar que las n cadenas ingresadas sean de largo al menos m.

// Ejemplo

// - Con n=4, m=3 y las cadenas ‘‘Fundacion’’, ‘‘Imperio’’, ‘‘Asimov’’ y ‘‘Trantor’’, la salida deberı́a ser la cadena ‘‘FunImpAsiTra’’.

#include <stdio.h>
#include <string.h>

int main()
{
    int n, m;
    printf("Ingresa la cantidad de cadenas de caracteres: \n");
    scanf("%d", &n);
    printf("Ingresa la cantidad de caracteres que desea imprimir por cadena: \n");
    scanf("%d", &m);

    char arreglo[n][m + 1]; // m+1 por el caracter nulo, tomo solo cadenas de tamaño m independiente del ingreso

    for (int i = 0; i < n; i++)
    {
        printf("Ingrese la cadena %d: \n", i + 1);
        scanf("%s", arreglo[i]);
    }

    char concatenacion[n * m + 1]; // +1 por el caracter nulo
    concatenacion[0] = '\0';       // Inicializo en nulo para darle lugar a la funcion strncat

    // Ciclo para concatenar
    for (int i = 0; i < n; i++)
    {
        strncat(concatenacion, arreglo[i], m);
    }
    printf("%s\n", concatenacion);

    return 0;
}
