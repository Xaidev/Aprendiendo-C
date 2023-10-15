// Escriba un programa que pida un número entero n, para que luego lea n números de punto flotante de precisión simple (float).
//  El programa deberá retornar la suma de las partes decimales de los números.

#include <stdio.h>

int main()
{
    int n;
    printf("Ingresa el entero: \n");
    scanf("%d", &n);

    float arr[n];
    float *p = arr;

    // Ciclo para guardar los numeros ingresados
    for (int i = 0; i < n; i++)
    {
        printf("Ingresa el numero flotante %d: \n", i + 1);
        scanf("%f", p + i);
    }

    float resultado = 0.0;

    // Le resto su parte entera al numero y solo quedaran sus decimales
    for (int i = 0; i < n; i++)
    {
        resultado += arr[i] - (int)arr[i];
    }

    printf("El resultado es: %.*f", n, resultado); // Utilizo %.*f para determinar la cantidad de decimales que quiero imprimir

    return 0;
}