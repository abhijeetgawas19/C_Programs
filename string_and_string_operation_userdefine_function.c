#include<stdio.h>
#include<stdlib.h>
int astrlen(char*);
void astrcpy(char*,char*);
void astrcat(char*,char*);
void astrcmp(char*,char*);
void astrrev(char*);
void palindrome(char*);
int main(void)
{
	int ch;
	while(1)
	{
		printf("\n------------------------\n");
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
				char m[25];
				printf("Enter the String\n");
				scanf("%s",m);
				printf("String is=%s\n",m);
				int result=astrlen(m);
				printf("Length of String is=%d\n",result);
				break;
			}
			case 2:
				{
					char m[25],s[25];
					printf("Enter the String\n");
					scanf("%s",m);
					printf("Enter the String\n");
					scanf("%s",s);
					printf("String 1 is=%s\n",m);
					printf("String 2 is=%s\n",s);
					astrcpy(m,s);
					break;
				}
			case 3:
				{
					char m[25],s[25];
					printf("Enter the String\n");
					scanf("%s",m);
					printf("Enter the String\n");
					scanf("%s",s);
					printf("String 1 is=%s\n",m);
					printf("String 2 is=%s\n",s);
					astrcat(m,s);
					break;
				}
			case 4:
				{
					char m[25],s[25];
					printf("Enter the String\n");
					scanf("%s",m);
					printf("Enter the String\n");
					scanf("%s",s);
					printf("String 1 is=%s\n",m);
					printf("String 2 is=%s\n",s);
					astrcmp(m,s);
					break;
				}
			case 5:
				{	
					char m[25];
					printf("Enter the String\n");
					scanf("%s",m);
					printf("String is=%s\n",m);
					astrrev(m);
					break;
				}
			case 6:
				{
					char m[25];
					printf("Enter the String\n");
					scanf("%s",m);
					printf("String is=%s\n",m);
					palindrome(m);
					break;
				}
			case 7:
				{
					exit(0);
					break;
				}
			default:
				{
					printf("Invalid Option Encountered\n");
				}
		}
	}
}
int astrlen(char *m)
{
	int i,len=0;
	for(i=0;m[i]!='\0';i++)
	{
		len++;
	}
	return len;
}
void astrcpy(char *m,char *p)
{
	int i,z;
	for(i=0;p[i]!='\0';i++)
	{
		m[i]=p[i];
	}
	for(z=i;m[z]!='\0';z++)
	{
		m[z]='\0';
	}
	printf("Copied String is=%s\n",m);
}
void astrcat(char *m,char *p)
{
	int i,k=0;
	for(i=0;m[i]!='\0';i++)
	{
		k++;
	}
	for(i=0;p[i]!='\0';i++)
	{
		m[k]=p[i];
		k++;
	}
	printf("Concatenated String=%s\n",m);
}
void astrcmp(char *m,char *p)
{
	int i,asc1=0,asc2=0,d=0;
	for(i=0;m[i]!='\0';i++)
	{
		d=(int)m[i];
		asc1=asc1+d;
	}
	d=0;
	for(i=0;p[i]!='\0';i++)
	{
		d=(int)p[i];
		asc2=asc2+d;
	}
	//printf("%d\t%d\n",asc1,asc2);
	if(asc1==asc2)
	{
		printf("Both Strings are equal");
	}
	else if(asc1>asc2)
	{
		printf("1st String is greater");
	}
	else
	{
		printf("2nd String is greater");
	}
}
void astrrev(char *s)
{
	int len,i,j;
	char rev[25];
	len=astrlen(s);
	for(i=len-1,j=0;i>=0;i--,j++)
	{
		rev[j]=s[i];
	}
	rev[j]='\0';
	printf("Reverse of String is=%s",rev);
}
void palindrome(char *m)
{
	int len=0,i,c=0;
	for(i=0;m[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;i<=len/2;i++)
	{
		if(m[i]==m[len-i-1])
		{
			c++;
		}
	}
	if(c==i)
	{
		printf("String is Palindromic\n");
	}
	else
	{
		printf("String is Not Palindromic\n");
	}
}
