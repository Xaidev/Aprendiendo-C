#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int retorno(int *a, int n){
	char repetidos[n];
	memset(repetidos, 0, n); // Incializo el arreglo en 0

	for(int i = 0; i < n; i++){
		for(int j = 1; j < n-i; j++){
			if(a[i] == a[j]){
				repetidos[i] = 1;
				repetidos[j] = 1;
			}
		}
	}
	int indice = 0;
	for(indice = 0; indice < n; indice++){
		if(repetidos[indice] == 0){
			break;
		}
	}
	return a[indice];
}


int main(){
	int n;
	printf("Ingresa el valor de n\n");
	scanf(" %d", &n);

	if(n < 1 || n > 100){
		return 1;
	}

	int a[n];
	for(int i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		if(x < 0 || x > 100){
			return 1;
		}
		a[i] = x;
	}
	int repetido = retorno(a, n);
	printf("%d xdxd\n", repetido);
	return 0;
}