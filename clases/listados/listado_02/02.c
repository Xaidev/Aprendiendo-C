// Como vimos en clases, toda permutación de números puede ser vista como un conjunto de ciclos. Escriba un programa que pida un número entero n,
// para que luego lea n números que forman una permutación en el rango [1..n]. Su programa debe reportar el largo del ciclo más largo.
// Por ejemplo, si tenemos la permutación [0, 6, 3, 10, 5, 11, 2, 9, 7, 4, 1, 8], la respuesta es 6, debido a que el ciclo más largo está dado por 4, 5, 11, 8, 7, 9.

// Ejemplos:

// - Si tenemos la permutación [0, 6, 3, 10, 5, 11, 2, 9, 7, 4, 1, 8], la respuesta es 6, debido a que el ciclo más largo está dado por 4, 5, 11, 8, 7, 9.

// - Si tenemos la permutación [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0], la respuesta es 12, ya que el ciclo más largo considera todos números de la permutación.

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    int *p = arr;

    // Marcas para registar por donde ya he pasado
    char marcas[n];

    // LLeno el arreglo con ceros
    memset(marcas, 0, sizeof(marcas));

    // Lleno el arreglo de largo n
    for (int i = 0; i < n; i++)
    {
        int aux;
        scanf("%d", &aux);
        *p = aux;
        p++;
    }

    // Vuelvo el puntero a la primera posicion del arreglo
    p = arr;

    // Creo un puntero a marcas para ir marcando por donde ya he pasado en el ciclo
    char *pmarcas = marcas;

    // Calculo las maximas iteraciones de la permutacion
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        // Posicion donde empezare
        int aux = i;
        // Variable local c para obtener el valor real de cada permutacion
        int c = 0;

        // Comparo la posicion del ciclo en base al indice para determinar si no hemos pasado por ese punto
        while (*(pmarcas + aux) == 0)
        {
            *(pmarcas + aux) = 1; // Marco la visita
            aux = *(p + aux);     // Obtengo el nuevo indice en funcion del arreglo que ingresamos
            c++;                  // Contador de cada iteracion
        }
        if (c >= max)
        {
            max = c;
        }
        printf("\n");
    }
    printf("%d", max);
    return 0;
}
