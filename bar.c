#include <stdio.h>

void soma(int a, int b){
	int soma;
	soma=a+b;
	printf("%d\n", soma);
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b);
	soma(a, b);
}
