#include<stdio.h>
#include<conio.h>
int space_col(int);
int main(void)
{
	int i,j,k,spaces,n,d,p;
	printf("\n");
	spaces=5+2;
	k=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i>1)
			{
			printf("%c\t",k);
			k++;
			}
			else
			{
				printf("%c\t",k);
			}
		}
		if(spaces!=0)
		{
			d=space_col(spaces);
		}
		if(d!=0)
		{
			if(i==5 && (k>=65 || k<=70))
			{		
					k--;
					//continue;
			}
			for(p=1;p<=i;p++)
			{
				if(i>1 && (k>=65 || k<=70))
				{
						k--;
						printf("%c\t",k);
				}
				else
				{
					printf("%c\t",k);
				}
				/*
						if(p==n)
				{
					//printf("")			
					continue;
				}
				*/
		
			}	
		}
		printf("\n");
		spaces=spaces-2;
	}
	return 0;
}
int space_col(int x)
{
	int xl=x-2,u;
	for(u=1;u<=x;u++)
	{
		printf("\t");
	}
	return xl;
}
