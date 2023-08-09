/*
    Break & Continue en C
*/
#include <stdio.h>
int main()
{
    int num = 0;
    while (num <= 7)
    {
        // recodar aunmentar el valor antes para evitar que el while sea infinito
        num++;
        if (num == 2)
        {
            continue;
        }
        printf("%i\n", num);
    }
    return 0;
}