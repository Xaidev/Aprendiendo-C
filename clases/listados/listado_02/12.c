#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[100];
    scanf("%s", palabra);
    int letras[strlen(palabra)]; // Creo un arreglo para las letras

    for (int i = 0; i < strlen(palabra); i++)
    {
        letras[i] = palabra[i] - 'a'; // las transformo a numeros
    }

    int des[strlen(palabra)]; // Arreglo para desencriptado
    des[0] = letras[0] - 5;   // El primer numero siempre sera el mismo  - 5

    if (des[0] < 0) // Si el numero llega a ser negativo significa que debo aunmetarlo en 26
    {
        des[0] += 26;
    }

    // Ciclo para amplificar las letras en 26, asi podre obtener su modulo entre ellas despues
    for (int i = 0; i < strlen(palabra); i++)
    {
        letras[i] = letras[i] + 26;
    }

    // Ciclo que obtendra el valor de cada palabra
    for (int i = 1; i < strlen(palabra); i++)
    {
        // Si el numero actual es mayor o igual al anterior simplemente obtengo su modulo con el anterior
        if (letras[i] >= letras[i - 1])
        {
            des[i] = letras[i] % letras[i - 1];
        }
        else // Si el numero es menor que el anterior significa que debo aunmentar de nuevo en 26 para asi obtener su modulo
        {
            des[i] = (letras[i] + 26) % letras[i - 1];
        }
    }
    // Regreso los valores originales
    for (int i = 0; i < strlen(palabra); i++)
    {
        des[i] += 'a';
    }
    // Print en pantalla
    for (int i = 0; i < strlen(palabra); i++)
    {
        printf("%c", des[i]);
    }
    printf("\n");
    return 0;
}