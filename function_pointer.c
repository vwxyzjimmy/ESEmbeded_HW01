#include<stdio.h>
#include<stdlib.h>

int plus(int a, int b){ return a+b; }
int minus(int a, int b){ return a-b; }
int multiply(int a, int b){ return a*b; }
int divided(int a, int b){ return a/b; }
int main(){
	int a, c;
	char b;
	char symble[4] = {'+','-','*','/'};
	scanf("%i %c %i", &a, &b, &c);
	//FUNCTION POINTER
	int(*fptr)(int, int);
	fptr = plus;
	printf("function pointer: %d + %d = %d\n", a, c, fptr(a, c));
	fptr = minus;	
	printf("function pointer: %d - %d = %d\n", a, c, fptr(a, c));
	fptr = multiply;
	printf("function pointer: %d * %d = %d\n", a, c, fptr(a, c));
	fptr = divided;
	printf("function pointer: %d / %d = %d\n", a, c, fptr(a, c));

	//IF ELSE IF
	if(b == '+')
		printf("by if else: %d %c %d = %d\n", a, b, c, plus(a, c));
	else if(b == '-')
		printf("by if else: %d %c %d = %d\n", a, b, c, minus(a, c));
	else if(b == '*')
		printf("by if else: %d %c %d = %d\n", a, b, c, multiply(a, c));
	else if(b == '/')
		printf("by if else: %d %c %d = %d\n", a, b, c, divided(a, c));

	//FUNCTION POINTER
	for(int i=0;i<4;i++){
		if(symble[i] == b){
			if(i == 0)
				fptr = plus;
			else if(i == 1)
				fptr = minus;
			else if(i == 2)
				fptr = multiply;
			else if(i == 3)
				fptr = divided;
		}
	}
	printf("by function pointer: %d %c %d = %d\n", a, b, c, fptr(a, c));
	
	//ARRAY OF FUNCTION POINTER
	int(*afptr[])(int, int) = {plus, minus, multiply, divided};
	for(int i=0;i<4;i++){
		if(symble[i] == b)
			printf("by array of function pointer: %d %c %d = %d\n", a, b, c, afptr[i](a, c));
	}
}
