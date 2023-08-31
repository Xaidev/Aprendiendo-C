/*
Escriba un programa que pida dos n´umeros enteros m y n, e imprima el resultado de la combinatoria (m n)

*/

#include <stdio.h>
int factorial(int num);
double combinatoria(int x, int y);
int main()
{
    int num1, num2;
    printf("Ingresa los numeros \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("La combinatoria sera %.01f \n", combinatoria(num1, num2));
    return 0;
}

// calcular el factorial de un numero
int factorial(int num)
{
    int resultado = 1;
    for (int i = 1; i <= num; i++)
    {
        resultado *= i;
    }
    return resultado;
}

// funcion para calcular la combinatoria
double combinatoria(int x, int y)
{
    int num1;
    int num2;
    float resta;
    num1 = factorial(x);
    num2 = factorial(y);
    resta = factorial(x - y);
    double resultado = (double)num1 / (num2 * resta);
    return resultado;
}
