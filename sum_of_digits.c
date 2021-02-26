/*
	Calculate sum of digits
*/
#include<stdio.h>
int sum(int);
int main(void)
{
	int number;
	printf("Enter the Number\n");
	scanf("%d",&number);
	int result = sum(number);
	printf("Sum of Digits=%d",result);
}
int sum(int x)
{
	int summ=0,rem;
	while(x>0)
	{
		rem = x % 10;
		x = x / 10;
		summ = summ + rem;
	}
		return summ;
}
