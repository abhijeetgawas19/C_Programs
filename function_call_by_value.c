#include<stdio.h>
#include<stdlib.h>
void swap(int*,int*);
int main(void)
{
	int a,b;
	printf("Enter the 2 Numbers:\n");
	scanf("%d%d",&a,&b);
	printf("Values before swap = %d %d\n",a,b);
	swap(&a,&b);
	printf("Values after swap = %d %d\n",a,b);
}
void swap(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
