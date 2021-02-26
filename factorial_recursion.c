/*
	Write a program to print factorial of number using recursion
*/
#include<stdio.h>
#include<stdlib.h>
int fact(int);
int main(void)
{
	int result,x;
	printf("Enter the Value\n");
	scanf("%d",&x);
	result = fact(x);
	printf("Factorial of %d=%d\n",x,result);
}
int fact(int x)
{
	if(x==0 || x==1)
		return 1;
	else 
		return x * fact(x-1);
}

