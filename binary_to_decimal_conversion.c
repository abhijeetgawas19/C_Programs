#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	long int bn;
	int rem,sum,flag;
	sum=0;
	flag=0;
	printf("Enter the Binary Number:\n");
	scanf("%d",&bn);
	while(bn>0)
	{
		rem=bn%10;
		bn=bn/10;
		if(rem==0)
		{
			sum+=0;
			flag++;
		}
		else
		{
			sum+=pow(2,flag);
			flag++;
		}
	}
	printf("Decimal Equivalent is=%d",sum);
	return 0;
}
