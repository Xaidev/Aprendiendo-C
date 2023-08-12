/*
    Puntero en c, son la direccion que tendremos en memoria

*/
int main()
{
    int a = 2;
    // con * podemos declarar un puntero
    int *apt = &a;
    printf("%p", apt);
    return 0;
}