    #include <stdio.h>
    #include <string.h>
    #include <ctype.h>

    int contadorLetras(char* s){
        int contador = 1;
        for(int i = 0; i < (int)strlen(s); i++){
            if(isupper(s[i])){
                contador++;
            }
        }
        return contador;
    }



    int main(){
        char s[100000];
        scanf("%s", s);

        if(strlen(s) < 1 || strlen(s) > 100000){
            return 1;
        }

        int resultado = contadorLetras(s);
        printf("%d", resultado);
        return 0;
    }