#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *pCadena = malloc(100);

    printf("Ingresa la cadena de texto\n");
    scanf("%[^\n]s", pCadena);

    printf("La frase ingresada es: ");
    for(int i = 0; i < (int)strlen(pCadena); i++){
        printf("%c", pCadena[i]);
    }
    free(pCadena);
    return 0;
}