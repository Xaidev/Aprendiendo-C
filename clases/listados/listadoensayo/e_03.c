/*
Observe el siguiente patron de impresion de 8 niveles. Escriba un programa que pida un numero entero n e imprima
el mismo patron en n niveles.

Ejemplo

# ########
++ +++++++
### ######
++++ +++++
##### ####
++++++ +++
####### ##
++++++++ +
*/
#include <stdio.h>

int main()
{
    int n;            // Cantidad de veces
    int auxiliar = 1; // Utilizo la variable auxiliar para saber cuando debo imprimir el espacio
    char space = ' ';
    printf("Ingresa los niveles:\n");
    scanf("%d", &n);

    do
    {
        // Determino si imprimire "#" para filas impares y "+" para las filas pares
        if (auxiliar % 2 != 0)
        {
            // ciclo para imprimir la linea correctamente
            for (int i = 0; i <= n; i++)
            {
                // Si i es igual al auxiliar imprimira un espacio, asi formo la diagonal
                if (i == auxiliar)
                {
                    printf("%c", space);
                }
                printf("#");
                // Si i es igual a n, significa que sera el final del ciclo entonces quiero imprimir un salto de linea
                if (i == n)
                {
                    printf("#");
                    // Verifico que n no sea igual al auxiliar asi evito un salto de linea extra al terminar el programa
                    if (n == auxiliar)
                    {
                        break;
                    }
                    printf("\n");
                }
            }
            // Aunmento el valor de auxiliar
            auxiliar++;
        }
        // Mismo procedimiento pero para el caso "+"
        else
        {
            for (int j = 0; j <= n; j++)
            {
                if (j == auxiliar)
                {
                    printf("%c", space);
                }
                printf("+");
                if (j == n)
                {
                    printf("+");
                    if (n == auxiliar)
                    {
                        break;
                    }
                    printf("\n");
                }
            }
            auxiliar++;
        }
        // Verifico si el auxiliar se paso del limite de n, termino el programa porque significa que ya ha terminado de imprimir lo requerido
    } while (auxiliar <= n);
    return 0;
}