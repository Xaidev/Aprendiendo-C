#include <stdio.h>

int main()
{

    int metro_minuto, total; // Donde guardo mis datos
    printf("Ingresa la rapidez\n");
    scanf("%d", &metro_minuto);

    // Cuento el metro por minuto
    for (int i = 0; i <= 9; i++)
    {
        total += metro_minuto;
        // Si en algun momento es mayor, simplemente terminamos el ciclo
        if (total >= 3700)
        {
            printf("Con x=%d se logra llegar a tiempo", metro_minuto);
            break;
        }
    }

    // Si el total de metros recorridos es menor a 3700, el permiso vence.
    if (total < 3700)
    {
        printf("Con x=%d el permiso vencera", metro_minuto);
    }
    return 0;
}
