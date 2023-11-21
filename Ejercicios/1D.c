#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[100], t[100];
    scanf("%s", s);
    getchar();
    scanf("%s", t);

    if(s[0] == t[(int)strlen(t)-1] && s[(int)strlen(s)-1] == t[0]){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}