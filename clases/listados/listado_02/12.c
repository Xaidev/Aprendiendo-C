#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[100];
    scanf("%s", palabra);
    int letras[strlen(palabra)];

    for (int i = 0; i < strlen(palabra); i++)
    {
        letras[i] = palabra[i] - 'a';
    }

    int des[strlen(palabra)];
    des[0] = letras[0] - 5;

    if (des[0] < 0)
    {
        des[0] += 26;
    }

    for (int i = 0; i < strlen(palabra); i++)
    {
        letras[i] = letras[i] + 26;
    }

    for (int i = 1; i < strlen(palabra); i++)
    {
        if (letras[i] >= letras[i - 1])
        {
            des[i] = letras[i] % letras[i - 1];
        }
        else
        {
            des[i] = (letras[i] + 26) % letras[i - 1];
        }
    }

    for (int i = 0; i < strlen(palabra); i++)
    {
        des[i] += 'a';
    }

    for (int i = 0; i < strlen(palabra); i++)
    {
        printf("%c", des[i]);
    }
    printf("\n");
    return 0;
}