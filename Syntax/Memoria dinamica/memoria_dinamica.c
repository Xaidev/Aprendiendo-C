#include <stdio.h>
#include <stdlib.h> // Contiene la definición de malloc

int main() {

  printf("###################################################\n");
  printf("### Reserva de memoria para un arreglo (malloc) ###\n");
  printf("###################################################\n\n");

  int n = 0;
  printf("Ingrese el largo del arreglo a declarar: ");
  scanf("%d", &n);
  
  int *arr = malloc(n*sizeof(int));
  if(arr == NULL) {    
    exit(1);
  }

  int sum = 0;
  for(int i=0; i < n; i++)
    sum += arr[i];

  arr = malloc(10*sizeof(int));

  printf("Se reservó memoria para un arreglo de %d enteros (%ld bytes)\n", n, n*sizeof(int));

  free(arr);

  
  // Nota: ¿Qué es heap overflow?
  return 1;
}
