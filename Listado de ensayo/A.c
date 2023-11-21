#include <stdio.h>


void timeConversion(char* s){
    if(s[8] == 'A'){
        if(s[0] == '1' && s[1] == '2'){
            s[0] = '0';
            s[1] = '0';
        }
    } else if (s[8] == 'P'){
        if(s[0] != '1' || s[1] != '2'){
            s[0] += 1;
            s[1] += 2;
        }
    }
    s[8] = '\0';
}

int main(){
    char hora[10];
    scanf("%s", hora);
    timeConversion(hora);
    printf("%s\n", hora);
    return 0;
}