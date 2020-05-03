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

void subtracao(int a, int b){
	int sub;
	sub=a-b;
	printf("%d\n", sub);
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b);
	soma(a, b);
	multiplicacao(a, b);
	subtracao(a, b);
}
