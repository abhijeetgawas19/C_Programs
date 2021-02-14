#include<stdio.h>
#include<stdlib.h>
int number=10;
int main(void)
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=4;j>=i;j--)
		{
			printf("%d\t",number);
			number--;
		}
		printf("\n");
	}
}
