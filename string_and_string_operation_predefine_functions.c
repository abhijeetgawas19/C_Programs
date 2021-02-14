#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
	int ch;
	while(1)
	{
		printf("------------------------\n");
		printf("1.Find the Length of String\n");
		printf("2.Copying the 2 Strings\n");
		printf("3.Concatenation of 2 Strings\n");
		printf("4.Comparision of 2 Strings\n");
		printf("5.Reverse of Strings\n");
		printf("6.Check String is Palindromic?\n");
		printf("7.Exit\n");
		printf("Enter the choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					char string[50];
					printf("Enter the String\n");
					scanf("%s",string);
					printf("String is=%s\n",string);
					int length=strlen(string);
					printf("Length of String is=%d\n",length);
					break;
				}
			case 2:
				{
					char string[50],string2[50];
					printf("Enter the String 1\n");
					scanf("%s",string);
					printf("Enter the String 2\n");
					scanf("%s",string2);
					printf("String 1 is=%s\n",string);
					printf("String 2 is=%s\n",string2);
					strcpy(string,string2);
					printf("String copied is=%s\n",string);
					break;
				}
			case 3:
				{
					char string[50],string2[50];
					printf("Enter the String 1\n");
					scanf("%s",string);
					printf("Enter the String 2\n");
					scanf("%s",string2);
					printf("String 1 is=%s\n",string);
					printf("String 2 is=%s\n",string2);
					strcat(string,string2);
					printf("String concatenated is=%s\n",string);
					break;
				}
			case 4:
				{
					char string[50],string2[50];
					printf("Enter the String 1\n");
					scanf("%s",string);
					printf("Enter the String 2\n");
					scanf("%s",string2);
					printf("String 1 is=%s\n",string);
					printf("String 2 is=%s\n",string2);
					int result=strcmp(string,string2);
					if(result==0)
					{
						printf("Both Strings are identical\n");
					}
					else if(result>0)
					{
						printf("String 1 is greater than String 2\n");
					}
					else
					{
						printf("String 2 is greater than String 1\n");
					}
					break;
				}
				case 5:
				{
					char string[50];
					printf("Enter the String\n");
					scanf("%s",string);
					printf("String is=%s\n",string);
					printf("Reverse String=%s\n",strrev(string));
					break;
				}
				case 6:
				{
					char string[50],string2[50];
					printf("Enter the String \n");
					scanf("%s",string);
					strcpy(string2,string);
					strrev(string2);
					if(strcmp(string,string2)==0)
					{
						printf("String is Palindromic\n");
					}
					else
					{
						printf("String is Non-Palindromic\n");
					}
					break;
				}
				case 7:
					{
						exit(0);
						break;
					}
				default:
					{
						printf("Invalid Choice Encountered\n");
					}
		}
	}
}
