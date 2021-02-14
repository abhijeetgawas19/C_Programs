#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int ch;
	while(1)
	{
	printf("---------------\n");
	printf("1.Read a File\n");
	printf("2.Write a File\n");
	printf("3.Copy a File\n");
	printf("4.Merge a File\n");
	printf("5.Exit\n");
	printf("Enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				FILE *fp;
				char file_name[50];
				printf("Enter the File Name:\n");
				scanf(" %s",file_name);
				fp=fopen(file_name,"r");
				if(fp==NULL)
				{
					printf("Unable to Open File\n");
					exit(0);
				}
				char data=fgetc(fp);
				while(data!=EOF)
				{
					printf("%c",data);
					data=fgetc(fp);
				}
				fclose(fp);
				printf("\n");
				break;
			}
		case 2:
			{
				FILE *fp;
				char file_name[100];
				char string[100];
				printf("Enter the File Name:\n");
				scanf(" %s",&file_name);
				fp=fopen(file_name,"w");
				printf("Enter the Data to be stored in File\n");
				scanf(" %[^\n]s",string);
				fprintf(fp," %s",string);
				fclose(fp);
				printf("File written Successfully\n");
				printf("\n");
				break;
			}
		case 3:
			{
				FILE *fp1,*fp2;
				char file_name1[100];
				char file_name2[100]; 
				char c;
				printf("Enter the First File Name\n");
				scanf(" %s",&file_name1);
				fp1=fopen(file_name1,"r");
				if(fp1==NULL)
				{
					printf("Unable to Open the File\n");
					exit(0);
				}
				printf("Enter the Second File Name\n");
				scanf(" %s",&file_name1);
				fp2=fopen(file_name2,"w");
				c=fgetc(fp1);
				while(c!=EOF)
				{
					fprintf(fp2,"%c",c);
					c=fgetc(fp1);
				}
				fclose(fp1);
				fclose(fp2);
				printf("Successfully Copied\n");
				break;
			}
		case 4:
			{
				FILE *fp1,*fp2;
				char file_name1[100];
				char file_name2[100]; 
				char c;
				printf("Enter the First File Name\n");
				scanf("%s",&file_name1);
				printf("Enter the Second File Name\n");
				scanf("%s",&file_name2);
				fp1=fopen(file_name1,"r");
				if(fp1==NULL)
				{
					printf("Unable to Open the File\n");
					exit(0);
				}
				fp2=fopen(file_name2,"a");
				c=fgetc(fp1);
				while(c!=EOF)
				{
					fprintf(fp2,"%c",c);
					c=fgetc(fp1);
				}
				fclose(fp1);
				fclose(fp2);
				printf("Successfully Merged\n");
				break;
			}
		case 5:
			{
				exit(0);
				break;
			}
		default:
			{
				printf("Invalid Choice\n");
			}
	}
	}
}
