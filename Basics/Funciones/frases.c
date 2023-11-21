#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* concatenarFrases(char *frase1,char *frase2) {
    int longitud = strlen(frase1) + strlen(frase2) + 1;
    char* concatenado = (char*)malloc(longitud);
    if (concatenado == NULL) {
        printf("Error al asignar memoria\n");
        exit(1);
    }
    strcpy(concatenado, frase1);
    strcat(concatenado, frase2); // Utiliza strcat para concatenar frase2 al final de frase1
    return concatenado;
}

char* invertirFrase(const char *frase) {
    int longitud = strlen(frase);
    char* invertida = (char*)malloc(longitud + 1);
    if (invertida == NULL) {
        printf("Error al asignar memoria\n");
        exit(1);
    }
    
    for (int i = 0; i < longitud; i++) {
        invertida[i] = frase[longitud - 1 - i];
    }
    invertida[longitud] = '\0';
    return invertida;
}

void liberarMemoria(char *p){
    free(p);
}

int main() {
    char frase1[200], frase2[200];

    printf("Ingrese la primera frase: ");
    scanf("%[^\n]s", frase1); // Leer la primera frase sin consumir el carácter de nueva línea.
    getchar();
    printf("Ingresa la segunda frase: ");
    scanf("%[^\n]s", frase2);

    char *concatenada = concatenarFrases(frase1, frase2);
    printf("Frases concatenadas: %s\n", concatenada);

    char *invertida = invertirFrase(frase1);
    printf("Primera frase invertida: %s\n", invertida);

    liberarMemoria(concatenada);
    liberarMemoria(invertida);

    return 0;
}