#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int decno,i,rem;
	int bin[8]={2};
	i=0;
	printf("Enter the Number:\n");
	scanf("%d",&decno);
	while(decno>0)
	{
		rem=decno%2;
		bin[i]=rem;
		i++;
		decno=decno/2;
	}
	printf("Binary No:\n");
	for(i=7;i>=0;i--)
	{
		printf("%d",bin[i]);
	}
}
