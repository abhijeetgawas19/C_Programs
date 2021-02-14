	#include<stdio.h>
	#include<conio.h>
	int main(void)
	{
		int a,b,c,d,e;
		printf("Enter the 3 Values\n");
		scanf("%d%d%d",&a,&b,&c);
		d=a>b?a:b;
		e=d<c?c:d;
		printf("result=%d\n",e);
		return 0;
	}
