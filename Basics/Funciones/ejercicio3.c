// Crea una función que tome una cadena como entrada y cuente cuántas palabras contiene.
#include <stdio.h>
#include <string.h>

int contador(char* frase){
    int c = 0; 
    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] == ' '){
            c++;
        }
    }
    if(c == 0){
        return c;
    } else {
        return c+1;
    }
}

int main(){
    char frase[100];
    printf("Ingresa la cadena: \n");
    scanf("%[^\n]s", frase);
    int palabras = contador(frase);
    printf("La cantidad de palabras que hay en la cadena es de: %d \n", palabras);
    return 0;
}