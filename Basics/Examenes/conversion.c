#include <stdio.h>

int main() {
    char t[10];
    scanf("%s", t);
    int array[10];

    for(int i = 0; i < 10; i++){
        array[i] = t[i];
    }

    for(int i = 0; i < 10; i++){
        array[i] -= 48;
    }

    if(t[8] == 'P'){
        if(array[0] == 1 && array[1] == 2){
            array[0] = 0;
            array[1] = 0;
        }
        if(array[1] + 2 > 9){
            if(array[1] + 2 == 11){
                array[1] = 1;
            } else if (array[1] + 2 == 12){
                array[1] = 2;
            } else if (array[1] + 2 == 13){
                array[1] = 3;
            }
            array[0] += 2;
        } else if(array[0] == 0 && array[1] != 0) {
            array[1] += 2;
            array[0] += 1;
        }
    }
    
    for(int i = 0; i < 10; i++){
        t[i] = array[i] + 48;
    }

    t[8] = '\0';
    printf("%s\n", t);

    return 0;
}