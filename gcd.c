#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,gcd,i;
	printf("Enter the 2 Numbers\n");
	scanf("%d%d",&a,&b);
	gcd=1;
	for(i=1;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	}
	printf("GCD of 2 Numbers:%d",gcd);
	return 0;
}
