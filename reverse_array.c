#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n;
	printf("Enter the Number of Elements required:\n");
	scanf("%d",&n);
	int arr[n],rev[n],i=0,j=0;
	printf("Enter the %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n-1,j=0;i>=0;i--,j++)
	{
		rev[j]=arr[i];
	}
	printf("1st Array Contents:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	printf("2nd Array Contents:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",rev[i]);
	}
	printf("\n");
}
