/*
Write a Program to find number is Armstrong or not
*/
#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	bool result = false;
	int number,temp,rem,ex=0,c;
	printf("Enter the number\n");
	scanf("%d",&number);
	temp = number;
	while(number>0)
	{
		rem = number % 10;
		c = rem * rem * rem;
		ex += c;
		number = number / 10;
	}
	if(ex == temp)
		result = true;
	if(result)
		printf("Armstrong Number=%d\n",ex);
	else
		printf("Not an Armstrong Number=%d\n",ex);
}
