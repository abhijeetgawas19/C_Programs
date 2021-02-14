#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int ch;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	while(1)
	{
		printf("------------------\n");
		printf("1. Increment a Pointer\n");
		printf("2. Decrement a Pointer\n");
		printf("3. Addition of Pointers\n");
		printf("4. Substraction of Pointers\n");
		printf("5. Comparision of Pointers\n");
		printf("6. Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					int *beg=&a[0];
					printf("Current Address of First Pointer=%u\n",beg);
					int n;
					printf("Enter the value to which increment\n");
					scanf("%d",&n);
					if(n>9)
					{
						printf("Array Limits is only 10\n");
					}
					else
					{
						int i;
						for(i=1;i<=n;i++)
						{
							beg=beg+1;
						}
						printf("New Position of Pointer is=%u\n",beg);
					}
					break;
				}
			case 2:
			{
					int *beg=&a[9];
					printf("Current Address of Last Pointer=%u\n",beg);
					int n;
					printf("Enter the value to which decrement\n");
					scanf("%d",&n);
					if(n>9)
					{
						printf("Array Limits is only 10\n");
					}
					else
					{
						int i;
						for(i=1;i<=n;i++)
						{
							beg=beg-1;
						}
						printf("New Position of Pointer is=%u\n",beg);
					}
					break;
			}
			case 3:
				{
					int *beg=&a[0];
					printf("Current Address of First Pointer=%u\n",beg);
					int n;
					printf("Enter the value to be added\n");
					scanf("%d",&n);
					if(n>9)
					{
						printf("Array Limits is only 10\n");
					}
					else
					{
						beg=beg+n;
						printf("New Position of Pointer is=%u\n",beg);
					}
					break;
				}
			case 4:
				{
					int *beg=&a[9];
					printf("Current Address of Last Pointer=%u\n",beg);
					int n;
					printf("Enter the value to be substracted\n");
					scanf("%d",&n);
					if(n>9)
					{
						printf("Array Limits is only 10\n");
					}
					else
					{
						beg=beg-n;
						printf("New Position of Pointer is=%u\n",beg);
					}
					break;
				}
			case 5:
				{
					int f,s;
					printf("For comparision enter any 2 number between 0 to 9\n");
					scanf("%d%d",&f,&s);
					if((f<0 && f>9)&&(s<0 && s>9))
					{
						printf("Elements can't be fetched\n");
						//break;
					}
					else
					{
						int *fp,*sp;
						if(f>s)
						{
							fp=&a[s];
							sp=&a[f];
						}
						else
						{
							fp=&a[f];
							sp=&a[s];
						}
						unsigned int diff;
						diff=sp-fp;
						printf("Difference between this two address=%u\n",diff);
					}
					break;
				}
			case 6:
				{
					exit(0);
					break;
				}
			default:
				{
					printf("Invalid Option\n");
				}
		}
	}
}
