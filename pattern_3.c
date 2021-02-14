#include<stdio.h>
#include<stdlib.h>
int c=65;
int main(void)
{
	int n,i,j;
	printf("Enter the Number of Rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c\t",c);
			c++;
		}
		c=65;
		printf("\n");
	}
}
