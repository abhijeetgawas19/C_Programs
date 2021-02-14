//Inverted Floyd
#include<stdio.h>
#include<stdlib.h>
int a=65;
int main(void)
{
	int r,i,j;
	for(i=1;i<6;i++)
	{
		a=65;	
		for(j=6;j>i;j--)
		{
			printf("%c\t",a);
			a++;	
		}
		printf("\n");
	}
}
