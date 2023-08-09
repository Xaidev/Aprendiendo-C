#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    // Buscar que significa fgest y strlen
    fgets(s, sizeof(s), stdin);
    s[strlen(s)] = '\0';
    printf("Hello, World!\n");
    printf("%s", s);
    return 0;
}