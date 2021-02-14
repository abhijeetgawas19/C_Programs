#include<stdio.h>
#include<stdlib.h>
int i=0;
int main(void)
{
	int n,i;
	printf("Enter the Number of Size of Array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the Array Elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	while(1)
	{
	int ch;
	printf("\n------Main Menu-----\n");
	printf("1. Array Print\n");
	printf("2. Array Reverse\n");
	printf("3. Sum of Elements\n");
	printf("4. Linear Search\n");
	printf("5. Sum of 2 Location element\n");
	printf("6. Swap Elements of Array\n");
	printf("7. Exit\n");
	printf("Enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				printf("Array Elements Straight Order:\n");
				for(i=0;i<n;i++)
				{
						printf("Array[%d]=%d\n",i,arr[i]);
				}
			}
			break;
		case 2:
			{
				printf("Array Elements Reverse Order:\n");
				for(i=n-1;i>=0;i--)
				{
					printf("Array[%d]=%d\n",i,arr[i]);
				}
			}
			break;
		case 3:
			{
				int sum=0;
				for(i=0;i<n;i++)
				{
					sum=sum+arr[i];
				}
				printf("Sum of Elements=%d\n",sum);
			}
			break;
		case 4:
			{
				int key,flag=0;
				printf("Enter the Key\n");
				scanf("%d",&key);
				for(i=0;i<n;i++)
				{
					if(arr[i]==key)
					{
						printf("%d found at [%d]th position\n",arr[i],i);
						flag++;
						break;
					}
				}
			}
			break;
		case 5:
			{
				int i,j;
				printf("Enter 2 Location Between 0 to %d\n",n-1);
				scanf("%d%d",&i,&j);
				printf("Element at %d is %d\n",i,arr[i]);
				printf("Element at %d is %d\n",j,arr[j]);
				printf("Sum of 2 Location is=%d\n",arr[i]+arr[j]);
			}
			break;
		case 6:
			{
				int f,s,temp;
				printf("Enter the Location 1\n");
				scanf("%d",&f);
				printf("Enter the Location 2\n");
				scanf("%d",&s);
				/*
				arr[f]=arr[f]+arr[s];
				arr[s]=arr[f]-arr[s];
				arr[f]=arr[f]-arr[s];
				*/
				temp=arr[f];
				arr[f]=arr[s];
				arr[s]=temp;
			}
			break;
		case 7:
			{
					exit(0);
			}
			break;
		default:
			{
				printf("Invalid Choice\n");
			}
	}
	}
}
