	#include<stdio.h>
	#include<stdlib.h>
	int main(void)
	{
		int ch;
		while(1)
		{
			printf("1.Lower Triangular Matrix\n");
			printf("2.Upper Triangular Matrix\n");
			printf("3.Exit\n");
			printf("Enter the Your Choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					{
						int r,c,j,i;
						printf("Enter the No of Rows and Columns\n");
						scanf("%d%d",&r,&c);
						if(r==c)
						{
							int arr[r][c];
							printf("Enter the First Array\n");
							for(i=0;i<r;i++)
							{
								for(j=0;j<c;j++)
							{
								printf("Enter the [%d][%d]th element\n",i,j);
								scanf("%d",&arr[i][j]);
							}
							}
							printf("Lower Triangular Matrix\n");
							for(i=0;i<r;i++)
							{
								for(j=0;j<c;j++)
								{
									if(i<j || i==j)
									{
										printf("");
									}
									else
									{
										printf("%d\t",arr[i][j]);
									}
								}
									printf("\n");
							}
						}
						else
						{
							printf("No of rows and columns must be same!!!!\n");
							break;
						}
						break;
					}
					case 2:
						{
						int r,c,j,i;
						printf("Enter the No of Rows and Columns\n");
						scanf("%d%d",&r,&c);
						if(r==c)
						{
							int arr[r][c];
							printf("Enter the First Array\n");
							for(i=0;i<r;i++)
							{
								for(j=0;j<c;j++)
							{
								printf("Enter the [%d][%d]th element\n",i,j);
								scanf("%d",&arr[i][j]);
							}
							}
							printf("Lower Triangular Matrix\n");
							for(i=0;i<r;i++)
							{
								for(j=0;j<c;j++)
								{
									if(i>j || i==j)
									{
										printf("");
									}
									else
									{
										printf("%d\t",arr[i][j]);
									}
								}
									printf("\n");
							}
						}
						else
						{
							printf("No of rows and columns must be same!!!!\n");
							break;
						}
						break;
					
						}
					case 3:
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
