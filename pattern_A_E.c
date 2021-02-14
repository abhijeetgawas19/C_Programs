#include<stdio.h>
#include<conio.h>
int main(void)
{
	int i,j;
	int k=65;
	for(i=1;i<=5;i++)
	{
		k=65;
		for(j=1;j<=i;j++)
		{
			printf("%c\t",k);
			k++;
		}
		printf("\n");
	}
	return 0;
}
