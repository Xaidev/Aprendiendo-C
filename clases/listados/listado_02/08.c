// Escriba un programa que lea un archivo de texto y reporte las siguientes estadísticas:

// Cantidad total de caracteres del archivo
// Cantidad de dígitos en el archivo
// Cantidad de letras minúsculas o mayúsculas en el archivo
// Cantidad de símbolos que no son dígitos o letras
// Cantidad total de palabras (definimos palabras como substrings separados por espacios)
// Las estadísticas deberán ser almacenadas en un flujo archivo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // Abro el archivo
    FILE *flujo = fopen("archivo.txt", "r");
    // Si el archivo es nulo, sale del programa
    if (flujo == NULL)
    {
        perror("Error en la apertura del archivo");
        exit(1);
    }

    // Variables para contar lo pedido
    char aux;
    int totalcaracteres = 0;
    int totaldigitos = 0;
    int totalmayusculas = 0;
    int totalminusculas = 0;
    int simbolos = 0;

    aux = fgetc(flujo); // Leo el primer caracter
    // Por cada caracter confirmo si es un digito, simbolo, letra, etc. Ademas Aunmento en uno para total de caracteres
    while (aux != EOF)
    {

        totalcaracteres++;
        if (isdigit(aux))
        {
            totaldigitos++;
        }
        if (islower(aux))
        {
            totalminusculas++;
        }
        if (isupper(aux))
        {
            totalmayusculas++;
        }
        if (!isalpha(aux) && !isdigit(aux))
        {
            simbolos++;
        }
        aux = fgetc(flujo); // Leo el siguiente caracter
    }
    // Cierro el archivo
    fclose(flujo);

    // Abro el rchivo
    FILE *f = fopen("archivo.txt", "r");
    if (f == NULL)
    {
        exit(1);
    }

    char buffer[1000];
    char *token;
    char sep[] = " ";
    int totalpalabras = 0;

    // Ciclo para contar la cantidad de palabras, leyendo la primera linea
    while (fgets(buffer, 1000, f))
    {
        token = strtok(buffer, sep);
        while (token != NULL)
        {
            totalpalabras++;
            token = strtok(NULL, sep);
        }
    }
    fclose(f);

    FILE *datos;

    datos = fopen("datos.txt", "a"); // Creo un archivo de txt y le paso los datos

    fprintf(datos, "La cantidad total de caracteres del archivo es: %d\n", totalcaracteres);
    fprintf(datos, "La cantidad de digitos del archivo es: %d\n", totaldigitos);
    fprintf(datos, "La cantidad de letras minuculas es: %d\n", totalminusculas);
    fprintf(datos, "La cantidad de letras mayusculas es: %d\n", totalmayusculas);
    fprintf(datos, "La cantidad de simbolos que no son digitos o letras es: %d\n", simbolos - 1); // -1 para no contar el EOF
    fprintf(datos, "La cantidad total de palabras es: %d\n", totalpalabras);
    fclose(datos);

    return 0;
}
