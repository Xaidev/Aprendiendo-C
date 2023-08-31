/*
Son las 18:25 y sólo le quedan 9 minutos a su permiso sanitario para regresar a su residencia,
la cual está a 3.7 km de distancia desde su posición actual.
Escriba un programa en C que decida si logrará llegar a tiempo a su residencia si se desplaza a
metros por minuto. El valor de debe ser ingresado al momento de ejecutar su código. (Nota: Asuma que su residencia está en línea recta)

Ejemplo:

Con x=300 el permiso vencerá
Con x=500 se logra llegar a tiempo

*/

#include <stdio.h>

int main()
{
    int metro_minuto, total;
    printf("Ingresa la rapidez\n");
    scanf("%d", &metro_minuto);

    for (int i = 0; i <= 9; i++)
    {
        total += metro_minuto;
        if (total >= 3700)
        {
            printf("Con x=%d se logra llegar a tiempo", metro_minuto);
            break;
        }
    }

    if (total < 3700)
    {
        printf("Con x=%d el permiso vencera", metro_minuto);
    }
    return 0;
}