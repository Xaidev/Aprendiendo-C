#include <stdio.h>


int BinarySearchRecursive(int array[], int izquierda, int derecha, int objetivo) {
    if(derecha >= izquierda){
        int medio = izquierda + (derecha - izquierda) / 2;
        if(array[medio] == objetivo){ 
            return medio;
        }
        if(array[medio] > objetivo){
            return BinarySearchRecursive(array, izquierda, medio - 1, objetivo);
        }
        return BinarySearchRecursive(array, medio - 1, derecha, objetivo);
    }
    return -1;

}

int BinarySearch(int array, int izquierda, int derecha, int objetivo) {
    while(izquierda <= derecha){
        int medio = izquierda + (derecha - izquierda) / 2;
        if (array[medio] == objetivo) return medio;
        if (array[medio] > objetivo) izquierda = medio - 1;
        else derecha = medio + 1;
    }
    return -1;
}

