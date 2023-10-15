// Escriba un programa que lea un archivo de texto y reporte las siguientes estadísticas:

// Cantidad total de caracteres del archivo
// Cantidad de dígitos en el archivo
// Cantidad de letras minúsculas o mayúsculas en el archivo
// Cantidad de símbolos que no son dígitos o letras
// Cantidad total de palabras (definimos palabras como substrings separados por espacios)
// Las estadísticas deberán ser almacenadas en un nuevo archivo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *flujo = fopen("archivo.txt", "r");
    if (flujo == NULL)
    {
        perror("Error en la apertura del archivo");
        exit(1);
    }

    char aux;
    int totalcaracteres = 0;
    int totaldigitos = 0;
    int totalmayusculas = 0;
    int totalminusculas = 0;
    int simbolos = 0;

    while (aux != EOF)
    {
        aux = fgetc(flujo);
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
        if (!isalpha(aux))
        {
            simbolos++;
        }
    }
    fclose(flujo);

    FILE *f = fopen("archivo.txt", "r");
    if (f == NULL)
    {
        exit(1);
    }

    char buffer[1000];
    char *token;
    char sep[] = " ";
    int totalpalabras = 0;

    while (!feof(f))
    {
        if (fgets(buffer, 1000, flujo))
        {
            token = strtok(buffer, sep);
            while (token != NULL)
            {
                token = strtok(NULL, sep);
                totalpalabras++;
            }
        }
    }
    fclose(f);

    FILE *nuevo = fopen("datos.txt", "w");
    if (nuevo == NULL)
    {
        perror("Error al crear o abrir archivo");
        exit(1);
    }
    else
    {
        fprintf(nuevo, "La cantidad total de caracteres del archivo es: %d\n", totalcaracteres);
        fprintf(nuevo, "La cantidad de digitos del archivo es: %d\n", totaldigitos);
        fprintf(nuevo, "La cantidad de letras minuculas es: %d\n", totalminusculas);
        fprintf(nuevo, "La cantidad de letras mayusculas es: %d\n", totalmayusculas);
        fprintf(nuevo, "La cantidad de simbolos que no son digitos o letras es: %d\n", simbolos);
        fprintf(nuevo, "La cantidad total de palabras es: %d\n", totalpalabras);
        fclose(nuevo);
    }

    return 0;
}
