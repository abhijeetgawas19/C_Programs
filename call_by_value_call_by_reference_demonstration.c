#include<stdio.h>
#include<stdlib.h>
void swapv(int,int); //Call by Value
void swapa(int*,int*); //Call by Address
int main(void)
{
	int ch;
	while(1)
	{
		printf("----------------\n");
		printf("1. Call by Value\n");
		printf("2. Call by Address\n");
		printf("3. Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	
					{
						int num1,num2;
						printf("Enter the Value:\n");
						scanf("%d%d",&num1,&num2);
						swapv(num1,num2);
						break;
					}
			case 2:
					{
						int numb1,numb2;
						printf("Enter the Value:\n");
						scanf("%d%d",&numb1,&numb2);
						swapa(&numb1,&numb2);
						printf("Value After swap |%d| |%d|\n",numb1,numb2);
						break;
					}
			case 3:
					{
						exit(0);
						break;
					}
			default:
					{
						printf("Invalid Choice Encountered!!!\n");
					}
		}
	}
}
void swapv(int a,int b)
{
	printf("Call by Value Mechanism\n");
	printf("Element before swap |%d| |%d|\n",a,b);
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("Element after swap |%d| |%d|\n",a,b);
}
void swapa(int *p,int *q)
{
		printf("Call by Address Mechanism\n");
		printf("Element before swap |%d| |%d|\n",*p,*q);
		*p=(*p)+(*q);
		*q=(*p)-(*q);
		*p=(*p)-(*q);
}
