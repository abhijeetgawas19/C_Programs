/*
7 8 9 10
6 5 4 3 
5 4 3 2 
4 3 2 1
3 2 1
2 1
1
*/
#include<stdio.h>
#include<stdlib.h>
static int dup;
int main()
{
	int i,j,x,y;
	int c=7;
	x=c;
	int counter=0;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=4;j++)
		{	
			if((c<=10 && c>=1) && counter==0)
			{
				printf("%d\t",c);
				c++;
			}
			else if(dup<=10 && dup>=1)
			{
				printf("%d\t",dup);
				dup--;
			}
		}
			printf("\n");
			counter++;
			dup=--x;
			//printf("%d",x);
			//y=x-1;
			
	}
	
return 0;
}
/*
	else
			{
				printf("%d\t",c);
				--c;
			}
		}
		c=m-1;
		//printf("%d",c);
		printf("\n");
*/
