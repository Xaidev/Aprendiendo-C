 #include <stdio.h>

// int main(){
//     int n,k;
//     printf("Ingresa n y k:\n");
//     scanf(" %d %d", &n, &k);
    
//     int fx;
//     int suma = 1; 
//     for(int x = 0; x < n; x++){
//         if(x % 4 == 0){
//             fx = 1;
//             suma += fx;
//         }else if((x % 2 == 0) && (x % 4 != 0)){
//             fx = 2;
//             suma += fx;
//         } else{
//             fx = 0;
//             suma += fx;
//         }
//         for(int j = x; j < n; j++){
//             suma *= k;
//         }
        
//     }

//     printf("El contenido de la suma es: %d \n", suma);



//     return 0;
// }

int main(){
    int n = 0, k = 0;
    scanf(" %d %d", &n,&k);

    int resultado = 0;

    for(int x = 0; x <= n; x++){
        int parcial = 1;
        for(int i = 0; i < x; i++){
            parcial *= k;
        }

        if(x % 4 == 0) parcial += 2;
        else if(x % 2 == 0) parcial += 1;

        resultado += parcial;
    }

    printf("%d", resultado);
    return 0;
}