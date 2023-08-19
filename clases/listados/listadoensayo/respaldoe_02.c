#include <stdio.h>

/*
Observe el siguiente patron de impresion de 8 niveles. Escriba un programa que pida un numero entero n e imprima
el mismo patron en n niveles.

Ejemplo:
#
++
###
++++
#####
++++++
#######
++++++++

*/
int main()
{
    int veces, auxiliar;
    int inicio = 1;
    char a = '#';
    char b = '+';
    char c = ' ';
    printf("Ingrese la cantidad de veces\n");
    scanf("%d", &veces);

    auxiliar = veces;

    // uso do-while para repetir el proceso hasta que se cumplan todas las veces
    do
    {
        // Determino cual sera la proxima linea que debo printear, es decir, si sera "#" o "+".
        if (inicio % 2 != 0)
        {
            // uso la variable inicio para saber cuantas "#" o "+" debo printear en cada iteracion
            for (int i = 1; i <= inicio; i++)
            {
                printf("%c", a);
                // cuando ya la variable i sea igual a el inicio, quiero hacer un salto de linea, evitando que todo se vea en la misma linea
                if (i == inicio)
                {
                    for (int j = 1; j <= veces; j++)

                        if (j == veces)
                        {
                            // Para evitar un salto extra al final del programa ya que si es igual significa que sera la ultima linea del print
                            if (auxiliar != inicio)
                            {
                                printf("\n");
                                break;
                            }
                        }
                        else
                        {

                            printf("%c", c);
                        }
                    // Decrezco veces para que cada iteracion no tenga la cantidad correcta de print de " "
                    veces--;
                }
            }
            // El inicio lo aunmento para saber la cantidad correcta de "#" o "+" que deba imprimir
            inicio++;
        }
        // El else sera lo mismo pero para el caso "+"
        else
        {
            for (int x = 1; x <= inicio; x++)
            {
                printf("%c", b);
                if (x == inicio)
                {
                    for (int y = 1; y <= veces; y++)
                        if (y == veces)
                        {
                            if (auxiliar != inicio)
                            {
                                printf("\n");
                                break;
                            }
                        }
                        else
                        {
                            printf("%c", c);
                        }
                    veces--;
                }
            }
            inicio++;
        }
        // Verifico en cada si veces es menor a 0 significa que la cantidad de iteraciones es correcta, finaliza el programa.
    } while (veces > 0);

    return 0;
}
