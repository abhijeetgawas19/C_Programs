#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int ch;
	while(1)
	{
		printf("1.Addition of Matrix\n");
		printf("2.Multiplication of Matrix\n");
		printf("3.Exit\n");
		printf("Enter the Your Choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					int r,c,i,j;
					printf("Enter the no of rows and columns required\n");
					scanf("%d%d",&r,&c);
					int a[r][c],b[r][c],d[r][c];
					printf("Enter the First Array\n");
					for(i=0;i<r;i++)
					{
						for(j=0;j<c;j++)
						{
							printf("Enter the [%d][%d]th element\n",i,j);
							scanf("%d",&a[i][j]);
						}
					}
					printf("Enter the Second Array\n");
					for(i=0;i<r;i++)
					{
						for(j=0;j<c;j++)
						{
							printf("Enter the [%d][%d]th element\n",i,j);
							scanf("%d",&b[i][j]);
						}
					}
					for(i=0;i<r;i++)
					{
						for(j=0;j<c;j++)
						{
							d[i][j]=a[i][j]+b[i][j];
						}
					}
					printf("Matrix 1\n");
					for(i=0;i<r;i++)
					{
						for(j=0;j<c;j++)
						{
							printf("%d\t",a[i][j]);
						}
						printf("\n");
					}
					printf("Matrix 2\n");
					for(i=0;i<r;i++)
					{
						for(j=0;j<c;j++)
						{
							printf("%d\t",b[i][j]);
						}
						printf("\n");
					}
					printf("Addition of Matrix\n");
					for(i=0;i<r;i++)
					{
						for(j=0;j<c;j++)
						{
							printf("%d\t",d[i][j]);
						}
						printf("\n");
					}
					break;
				}
				case 2:
					{
					int r,c,i,j,k,sum=0;
					printf("Enter the no of rows and columns required\n");
					scanf("%d%d",&r,&c);
					int a[r][c],b[r][c],d[r][c];
					printf("Enter the First Array\n");
					for(i=0;i<r;i++)
					{
						for(j=0;j<c;j++)
						{
							printf("Enter the [%d][%d]th element\n",i,j);
							scanf("%d",&a[i][j]);
						}
					}
					printf("Enter the Second Array\n");
					for(i=0;i<r;i++)
					{
						for(j=0;j<c;j++)
						{
							printf("Enter the [%d][%d]th element\n",i,j);
							scanf("%d",&b[i][j]);
						}
					}
					for(i=0;i<r;i++)
					{
						for(j=0;j<c;j++)
						{
							d[i][j]=a[i][j]+b[i][j];
						}
					}
					printf("Matrix 1\n");
					for(i=0;i<r;i++)
					{
						for(j=0;j<c;j++)
						{
							printf("%d\t",a[i][j]);
						}
						printf("\n");
					}
					printf("Matrix 2\n");
					for(i=0;i<r;i++)
					{
						for(j=0;j<c;j++)
						{
							printf("%d\t",b[i][j]);
						}
						printf("\n");
					}
					//Multiplication Logic
					for(i=0;i<r;i++)
					{
						for(j=0;j<c;j++)
						{
							for(k=0;k<r;k++)
							{
								sum=sum+a[i][k]*b[k][j];
							}
							d[i][j]=sum;
							sum=0;
						}
					}
					printf("Multiplication of Matrix\n");
					for(i=0;i<r;i++)
					{
						for(j=0;j<c;j++)
						{
							printf("%d\t",d[i][j]);
						}
						printf("\n");
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
