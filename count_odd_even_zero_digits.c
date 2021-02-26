/*
Write a program to accept number and count odd,even and zero digits
*/
#include<stdio.h>
int main(void)
{
	int n,rem,m;
	printf("Enter the Number\n");
	scanf("%d",&n);
	m=n;
	int even,odd,zero;
	even=odd=zero=0;
	while(n>0)
	{
		rem = n % 10;
		n = n / 10;
		if(rem%2==0 && rem!=0)
			even++;
		else if(rem%2!=0 && rem!=0)
			odd++;
		else
			zero++;
	}
	printf("%d number has %d odd %d even and %d zero digits",m,odd,even,zero);
}
