#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n;
	int fact,c;
	fact=c=1;
	printf("Enter the No\n");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
		fact=fact*c;
	}
	printf("Factorial of %d is %d\n",n,fact);
}
