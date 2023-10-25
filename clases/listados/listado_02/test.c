#include <stdio.h>
#include <string.h>

void cifrarMensaje(char *mensaje)
{
    int longitud = strlen(mensaje);
    int clave = 5; // Valor a agregar en cada paso

    for (int i = 0; i < longitud; i++)
    {
        if (mensaje[i] >= 'a' && mensaje[i] <= 'z')
        {
            int numero = mensaje[i] - 'a';  // Convertir letra a número
            numero = (numero + clave) % 26; // Agregar la clave y asegurarse de que esté en el rango
            mensaje[i] = numero + 'a';      // Convertir número de nuevo a letra minúscula y reemplazar en el mensaje
            clave = numero;                 // Actualizar la clave para el siguiente carácter
        }
    }
}

int main()
{
    char mensaje[100];

    printf("Ingrese el mensaje a cifrar: ");
    scanf("%s", mensaje);

    cifrarMensaje(mensaje);

    printf("Mensaje cifrado: %s\n", mensaje);

    return 0;
}
