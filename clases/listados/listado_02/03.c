// Escriba un programa que pida un entero negativo x y que genere su representación complemento a dos
// usando operaciones a nivel de bits (~, &, |, ^, << o >>). Su programa debe verificar que el número ingresado sea negativo.

#include <stdio.h>

int validacion(int n)
{
    while (n >= 0)
    {
        printf("su numero %d es mayor a cero, vuelva a ingresar:\n", n);
        scanf("%d", &n);
    }
    return n;
}

int main()
{
    int n;
    scanf("%d", &n);
    n = validacion(n);
    int complemento = ~n + 1; // Le sumo 1 para obtener la representacion binaria correcta
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
    {
        printf("%d", (complemento >> i) & 1);
    }
    printf("\n");
    return 0;
}
