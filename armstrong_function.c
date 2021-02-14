#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int __armfounder(int); //Function Declaration
int __digits(int); //Finding No of Digits 
int main(void)
{
	int a,temporary,sum;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	temporary=a;
	sum=__armfounder(a);
	if(sum==temporary)
	printf("Armstrong No");
	else
	printf("Not Armstrong No");
	return 0;
}
int __digits(int y)
{
	int con=0;
	while(y>0)
	{
		y=y/10;
		con++;
	}
	return con++;
}
int __armfounder(int num)
{
	int rem,s,d;
	s=0;
	d=__digits(num);
	while(num>0)
	{
		rem=num%10;
		s+=pow(rem,d);
		num=num/10;
	}
	return s;
}

