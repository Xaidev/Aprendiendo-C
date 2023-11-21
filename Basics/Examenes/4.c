#include <stdio.h>

int main(){

    
    int tamaño = 8;
    int matriz[tamaño][tamaño];
    //Suponiendo que tenemos el tamaño de la matriz y esta llena de valores
    int filaC = 0, columnaC = 0;
    int fila = 0, columna = 0, iteraciones = tamaño * 2;

    float matrizC[tamaño/2][tamaño/2];

    for(int i = 0; i < iteraciones; i++){
        float resultado = 0;
        for(int j = fila; j < fila + 2; j++){
            for(int k = columna; k < columna + 2; k++){
                resultado += matriz[j][k];
            }
        }
        
        resultado /= 4;

        matrizC[filaC][columnaC] = resultado;

        if(columnaC == tamaño / 2 - 1){
            matrizC[filaC][columnaC] = resultado;
            filaC++;
            columnaC = 0;
        } else {
            matrizC[filaC][columnaC] = resultado;
            columnaC++;
        }
        if (columna >= tamaño/2 - 2){
            columna = 0;
            fila += 2;
        } else {
            columna += 2;
            
        }
        
    }


    return 0;
}