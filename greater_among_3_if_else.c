#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int number1,number2,number3;
	printf("Enter the 3 Numbers:\n");
	scanf("%d%d%d",&number1,&number2,&number3);
	if(number1>number2 && number1>number3)
	{
		printf("%d is greater\n",number1);
	}
	if(number2>number1 && number2>number3)
	{
		printf("%d is greater\n",number2);
	}
	if(number3>number1 && number3>number2)
	{
		printf("%d is greater\n",number3);
	}
	if(number1==number2 && number2==number3)
	{
		printf("%d,%d,%d are equal",number1,number2,number3);
	}
}
