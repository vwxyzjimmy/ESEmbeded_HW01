#include<stdio.h>
#include<stdlib.h>
gffdd
int plus(int a, int b){ return a+b; }
int minus(int a, int b){ return a-b; }
int multiply(int a, int b){ return a*b; }
int divided(int a, int b){ return a/b; }
int main(){
	int a, c;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	//IF ELSE IF
	/*
	if(b == '+')
		printf("%d %c %d = %d\n", a, b, c, plus(a, c));
	else if(b == '-')
		printf("%d %c %d = %d\n", a, b, c, minus(a, c));
	else if(b == '*')
		printf("%d %c %d = %d\n", a, b, c, multiply(a, c));
	else if(b == '/')
		printf("%d %c %d = %d\n", a, b, c, divided(a, c));
	*/
	//ARRAY OF FUNCTION POINTER
	char operator[4] = {'+', '-', '*', '/'};
	int(*operation[4])(int, int) = {plus, minus, multiply, divided};
	for(int i=0;i<4;i++){
		if (b == operator[i])
			printf("%d %c %d = %d\n", a, b, c, (*operation[i])(a, c));
	}
}
