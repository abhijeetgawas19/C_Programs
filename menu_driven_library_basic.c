/*
	Menu Driven Program in C that shows working of library. The menu include following option
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Library
{
	int bno;
	char bname[50];
	float price;
};
static count = 0;
int main()
{
	// Book Details
	int i,n;
	printf("Enter the Number of Records to Store:\n");
	scanf("%d",&n);
	count = n-1;
	struct Library objects[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the Book No:\n");
		scanf("%d",&objects[i].bno);
		printf("Enter the Book Name:\n");
		scanf(" %[^\n]s",objects[i].bname);
		printf("Enter the Book Price:\n");
		scanf("%f",&objects[i].price);
	}
	system("cls");
	while(1)
	{
		int c;
		printf("Menu Driven\n");
		printf("1. Add Book Information\n");
		printf("2. Display Book Information\n");
		printf("3. Exit\n");
		printf("Enter the choice[1,2,3]\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				{
					printf("Enter the Book No:\n");
					scanf("%d",&objects[count].bno);
					printf("Enter the Book Name:\n");
					scanf(" %[^\n]s",objects[count].bname);
					printf("Enter the Book Price:\n");
					scanf("%f",&objects[count].price);
					count++;
					system("cls");
					break;
				}
			case 2:
				{
					int bkid,flag=0;
					printf("Enter the Book No:\n");
					scanf("%d",&bkid);
					for(i=0;i<count;i++)
					{
						if(objects[i].bno==bkid)
						{
							flag++;
							printf("Book Name:%s\n",objects[i].bname);
							printf("Book Price:%f\n",objects[i].price);
						}
					}
					if(flag==0)
						printf("No Records Found\n");
					break;
				}
			case 3:
				{
					exit(0);
					break;
				}
			default:
				{
					printf("Invalid Choice Try Again\n");
				}
		}
	}
}
