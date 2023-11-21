#include <stdio.h>
#include <stdbool.h>

int diferente(int *y){
	int repetidos[10] = {0};
    int aux = *y; // Creo un auxiliar que me ayuda a no cambiar el valor del puntero

	while (aux > 0){
		int numero = aux % 10;
		if(repetidos[numero] > 0){
			return false;
		}
		repetidos[numero]++;
	    aux /= 10;

	}
	return true;
}

int main(){
	int y;
	scanf("%d", &y);
	if (y < 1000 || y > 9000){
		return 1;
	}

	int* py = &y;
    (*py)++; // Año siguiente 

	while(!diferente(py)){
		(*py)++; // Mientras sea falso seguir aunmentando los años
	}

	printf("%d\n", *py);
	return 0;
}