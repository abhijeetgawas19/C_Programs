#include<stdio.h>
#include<stdlib.h>
void lsearch(int); // Only Number is accepted in switch case and passed as parameter
void bysearch(int);	// Only Number is accepted in switch case and passed as parameter
void sort(int [],int); //Function for sorting array required for Binary search
int main(void)
{
	int ch;
	do
	{
		printf("-------------\n");
		printf("1. Linear Search\n");
		printf("2. Binary Search\n");
		printf("3. Exit\n");
		printf("Enter your choice of search\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					int n;
					printf("Enter the Number of Elements required in array\n");
					scanf("%d",&n);
					lsearch(n);
					break;
				}
			case 2:
				{
					int n1;
					printf("Enter the Number of Elements required in array\n");
					scanf("%d",&n1);
					bysearch(n1);
					break;
				}
			case 3:
				{
					exit(0);
					break;
				}
			default:
				{
					printf("Invalid Option encountered try again!!!!");
				}
		}
	}while(1);
}
//Linear search Logic 
void lsearch(int n)
{
	int arr[n],i,key,c=1;
	printf("Enter the %d elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the Key to be searched\n");
	scanf("%d",&key);
	//Array Elements printing
	printf("Array elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	//Linear Search Operation
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("Element %d Found at %d Location\n",arr[i],c);
			break;
		}
		else
		{
			c++;
		}
	}
}
//Binary Search Logic
void bysearch(int n)
{
	int arr[n],i,key;
	printf("Enter the %d elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the Key to be searched\n");
	scanf("%d",&key);
	sort(arr,n);
	//Array Elements printing
	printf("Array elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	int lb,ub,mid;
	lb=0;
	ub=n-1;
	mid=(lb+ub)/2;
	while(lb<ub)
	{
		mid=(lb+ub)/2;
		if(arr[mid]==key)
		{
			printf("%d element found at %d location\n",arr[mid],mid);
			break;
		}
		else if(arr[mid]>key)
		{
			ub=mid-1;
		}
		else
		{
			lb=mid+1;
		}
	}
}
void sort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

