// Escriba un programa que pida la posición de un alfil en un tablero de ajedrez,
// para que luego reporte todos los movimientos válidos del alfil.
// Para reportar las posiciones, imprima por pantalla el tablero de ajedrez,
// marcando con una A la posición ingresada por teclado y con x’s las posibles posiciones válidas del alfil.
//(Sugerencia: Utilice una matriz de 8×8 para representar internamente el tablero)

// Ejemplos

// - Posición d5

//           ______________________
//       8 |  x                            x      |
//       7 |       x                  x           |
//       6 |            x        x                |
//       5 |                 A                    |
//       4 |            x         x               |
//       3 |       x                   x          |
//       2 |  x                             x     |
//       1 |                                     x |
//           ---------------------------
//             a   b   c   d   e   f   g   h

// - Posición h6

//           ______________________
//       8 |                           x           |
//       7 |                                x      |
//       6 |                                     A |
//       5 |                                x      |
//       4 |                           x           |
//       3 |                      x                |
//       2 |                 x                     |
//       1 |            x                          |
//           ---------------------------
//             a   b   c   d   e   f   g   h

#include <stdio.h>
#include <string.h>

int main()
{
    char tablero[8][8];

    // Lleno el tablero de espacios
    memset(tablero, ' ', sizeof(tablero));

    char alfil = 'A';
    char x;
    int y;

    printf("Ingresa las coordenadas del alfin : \n");
    scanf(" %c%d", &x, &y);

    int indice;

    // Uso la variable x de tipo char representandola como un indice tipo entero para el tablero
    if (x >= 'a' && x <= 'h')
    {
        indice = x - 'a'; // 'a' = 97
    }

    tablero[8 - y][indice] = alfil;

    // Posibles posiciones hacia la derecha
    // Obtengo las posiciones donde pondre las 'x', la variable i representa las columnas, la variable j y k filas superior e inferior respectivamente
    for (int i = indice + 1, j = 8 - y - 1, k = 8 - y + 1; i < 8; i++, j--, k++)
    {
        // Verifico que no se salga del limite
        if (j >= 0)
        {
            tablero[j][i] = 'x';
        }
        if (k < 8)
        {
            tablero[k][i] = 'x';
        }
    }
    // Posibles posiciones a hacia la izquierda
    // Lo mismo que el for anterior solo que al reves, decrezco i y k, y aumento j
    for (int i = indice - 1, j = 8 - y + 1, k = 8 - y - 1; i >= 0; i--, j++, k--)
    {
        // Verifico que no se salga del limite
        if (j >= 0)
        {
            tablero[j][i] = 'x';
        }
        if (k < 8)
        {
            tablero[k][i] = 'x';
        }
    }

    // printeo el tablero
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", 8 - i); // Indice del tablero
        for (int j = 0; j < 8; j++)
        {
            printf("%c ", tablero[i][j]);
            if ((i == 7) && (j + 1 == 8))
            {
                printf("\n\n  a b c d e f g h"); // Indice del tablero
            }
        }
        printf("\n");
    }

    return 0;
}