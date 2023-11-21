#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

void paridad(int* array, int* par, int* impar, int n, int* nuevotamañopar, int* nuevotamañoimpar){
  int contadorpar = 0, contadorimpar = 0;
    for(int i = 0; i < n; i++){
        if(array[i] % 2 == 0){
          par[contadorpar] = array[i];
          contadorpar++;
        } else {
          impar[contadorimpar] = array[i];
          contadorimpar++;
        }
    }
    if(contadorpar < n){
      int* temp = realloc(par, sizeof(int)*contadorpar);
      if(temp == NULL){
        free(temp);
        printf("Error al asignar memoria \n");
        exit(1);
      } else {
        par = temp;
      }
    }
    if(contadorimpar < n){
      int* temp = realloc(impar, sizeof(int) * contadorimpar);
      if(temp == NULL){
        free(temp);
        printf("Error al asignar memoria \n");
        exit(1);
      } else {
        impar = temp;
      }
    }
    *nuevotamañopar = contadorpar;
    *nuevotamañoimpar = contadorimpar;
}

void imprimirArray(int* Array, int n) {
  for(int i = 0; i < n; i++) {
    if(i == n - 1) {
      printf("%d", Array[i]);
      printf("\n");
    } else {
      printf("%d, ", Array[i]);
    }
  }
}


void liberarMemoria(int* array){
  free(array);
}

int main(void) {
  srand(time(NULL));
  int n;
  printf("Ingrese el largo del arreglo: ");
  scanf("%d", &n);

  int x[n];
  for(int i=0; i < n; i++)
    x[i] = rand() % 100;

  for(int i=0; i < n; i++)
    printf("%d ", x[i]);
  printf("\n");

  int* x1 = malloc(n * sizeof(int));
  int* x2 = malloc(n * sizeof(int));
  int tamañopar = 0, tamañoimpar = 0;

  paridad(x,x1,x2, n, &tamañopar, &tamañoimpar);

  printf("x1 = ");
  imprimirArray(x1, tamañopar);

  printf("x2 = ");
  imprimirArray(x2, tamañoimpar);

  liberarMemoria(x1);
  liberarMemoria(x2);

  /*
    Escriba un programa que, dado un arreglo de enteros x de largo n, genere dos
    arreglos x1 y x2, donde x1 contiene todos los valores pares del arreglo x y
    x2 contiene todos los valores impares.
   */
    
  return EXIT_SUCCESS;
}
