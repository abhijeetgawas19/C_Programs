#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("Enter the 2 Numbers\n");
	scanf("%d%d",&a,&b);
	int n1[20]={0};
	int n2[20]={0};
	int i,j,k;
	k=0;
	//Factors of 1st Element
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			n1[k]=i;
		//	printf("%d\n",n1[k]);
			k++;
		}
	}
	/*
	printf("Elements in 1st Array is:\n");
	for(i=0;i<20;i++)
	{
		if(n1[i]!=0)
		printf("%d\n",n1[i]);
	}
	*/
	k=0;
	//Factors of 2nd Element
	for(j=1;j<=b;j++)
	{
		if(b%j==0)
		{
		n2[k]=j;
	//	printf("%d\n",n2[k]);
		k++;
		}
	}
	/*
	printf("Elements in 2nd Array is:\n");
	for(j=0;j<20;j++)
	{
		if(n2[j]!=0)
		printf("%d\n",n2[j]);
	}
	*/
	int gcd=0;
	//int flag=0;
	for(k=0;k<20;k++)
	{
		for(i=0;i<20;i++)
		{
	//	if(n1[k]!=0 && n2[k]!=0)
			if(n1[k]==n2[i] && n1[k]!=0 && n2[i]!=0)
			{
	//			flag=flag+1;
				gcd=n1[k];
			}
		}
	}
	printf("GCD of 2 No's:%d\n",gcd);
	int lcm;
	int mul=a*b;
	lcm=mul/gcd;
	printf("LCM of 2 No's:%d\n",lcm);
	return 0;
}
