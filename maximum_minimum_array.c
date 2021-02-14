#include<stdio.h>
#include<stdlib.h>
void maxmin(int[],int);
int main(void)
{
	int n,i;
	printf("Enter the Size of Array:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the Elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array Elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	maxmin(arr,n);
}
void maxmin(int a[],int n)
{
	int i,max,min;
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(max>a[i])
		{
			max=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(min<a[i])
		{
			min=a[i];
		}
	}
	printf("Minimum and Maximum Element:\n%d and %d",max,min);
}
