#include <stdio.h>
/* Funcion main para la suma*/
int main()
{
    int num1;
    int num2;
    int resultado;
    printf("ingrese el primer valor\n");
    scanf("%d", &num1); /* Con scanf podemos pedir el dato de entrada */
    printf("ingresa el segundo valor\n");
    scanf("%d", &num2);
    resultado = num1 + num2; /* Simplemente cambiando el +, por algun otro operador*/
    printf("el reseultado de la suma es:%d\n", resultado);
    return 0;
}