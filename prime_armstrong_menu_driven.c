#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int counter(int); //This function is for armstrong number checking for number of digits available ex 123 so digits are 3
int main(void)
{
	int ch;
	while(1)
	{
		printf("-----------\n");
		printf("1. Prime Number\n");
		printf("2. Armstrong Number\n");
		printf("3. Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					int num,flag=0;
					int c;
					printf("Enter the Number\n");
					scanf("%d",&num);
					for(c=2;c<=num/2;c++)
					//c<=num/2 because the prime number is checked upto half of its value
					{
						if(num%c==0)
						flag++;
					}
					if(flag==0)
					{
						printf("%d is prime number\n",num);
					}
					else
					{
						printf("%d is not prime number\n",num);
					}
					//flag==0 because condition is checked such that it should not divide any element from 2 to num/2 if it divides with any element in between it is not prime number!!!!!
					break;
				}
			case 2:
				{
					int numb,rem,count,temp,sum;
					printf("Enter the number\n");
					scanf("%d",&numb);
					temp=numb; //temp is used for comparision purpose
					count=counter(numb);
					while(numb>0)
					{
						rem=numb%10;
						sum=sum+pow(rem,count);
						numb=numb/10;
					}
					if(sum==temp)
						printf("%d is armstrong no\n",temp);
					else
						printf("%d is not armstrong no\n",temp);
					break;
				}
			case 3:
					{
						exit(0);
						break;
					}
			default:
					{
						printf("Invalid choice uncountered Try again!!!\n");
					}
		}
	}
}
int counter(int dup)
{
	//This function returns number of digits avaliable in the function
	int x,f;
	f=0;
	while(dup>0)
	{
		x=dup%10;
		f++;
		dup=dup/10;
	}
	return f;
}
