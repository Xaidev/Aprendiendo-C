void contar(int n, int A[], int X[10]){
    for(int numero = 0; numero < 10; numero++){
        int repetidos = 0;
        for(int contador = 0; contador < n; contador++){
            if(A[contador] == numero)
                repetidos++;
        }
        X[numero] = repetidos;
    }
}

int max_pos(int n, int X[]){
    int max = 0, ult_pos = 0;
    for(int i = 0; i < n; i++){
        if(max < X[i]){
            max = X[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(max == X[i]){
            ult_pos = i;
        }
    }
    return ult_pos;
}

int mas_repetido(int n, int A[]){
    int X[10];
    for(int i = 0; i < 10; i++){
        X[i] = 0;
    }
    contar(n,A,X);
    int elemento_mas_repetido = max_pos(10,X);
    return X[elemento_mas_repetido];
}