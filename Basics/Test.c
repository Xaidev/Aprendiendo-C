#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char s[100];
    char frase[1000];
    scanf("%c", &ch);
    scanf("%s", s);

    getchar();
    scanf("%[^\n]s", frase);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", frase);

    return 0;
}