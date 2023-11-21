#include <stdio.h>

int main(){
	int n;
	scanf(" %d", &n);
	if(n < 0 || n > 100000){
		return 1;
	}
	printf("%d", n);
	return 0;
}

