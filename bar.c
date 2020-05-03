#include <stdio.h>

void soma(int a, int b){
	int soma;
	soma=a+b;
	printf("%d\n", soma);
}

void multiplicacao(int a, int b){
	int mult;
	mult=a*b;
	printf("%d\n", mult);
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b);
	soma(a, b);
	multiplicacao(a, b);
}
