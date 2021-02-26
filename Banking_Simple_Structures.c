/*
Write a Program to accept customer details such as:
Account No
Account Name
Balance Amount
Write a function to print the account no and name of each customer with balance with Rs 100.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct customerDetails
{
	int account_no;
	char account_name[50];
	float balance;
};
//void function_less_100(struct customerDetails, int);
void function_less_100(struct customerDetails objects[], int n)
{
	int i;
	printf("Details of Accounts with less than 100\n");
	for(i=0;i<n;i++)
	{
		if(objects[i].balance<100)
		{
			printf("Account No=%d\n",objects[i].account_no);
			printf("Account Name=%s\n",objects[i].account_name);
		}
	}
}
int main(void)
{
	int n,i;
	printf("Enter the Number of Records to enter:\n");
	scanf("%d",&n);
	struct customerDetails objects[n];
	printf("Enter the Details\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the Account No\n");
		scanf("%d",&objects[i].account_no);
		printf("Enter the Account Holder Name\n");
		scanf(" %[^\n]s",objects[i].account_name);
		printf("Enter the Account Balance\n");
		scanf("%f",&objects[i].balance);
	}
		function_less_100(objects,n);
}
