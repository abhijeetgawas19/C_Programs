#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int ch;
	while(1)
	{
		printf("----------------\n");
		printf("1. Factorial\n");
		printf("2. Fibonacci\n");
		printf("3. Greatest Common Divisor\n");
		printf("4. Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					{
						int fact_result=1;
						int fact_number,counter;
						printf("Enter the Number\n");
						scanf("%d",&fact_number);
						for(counter=1;counter<=fact_number;counter++)
						{
							fact_result=fact_result*counter;
						}
						printf("%d Factorial is %d\n",fact_number,fact_result);
					}
					break;
			case 2:
					{
						int first_term,last_term,required_term,total_term,counter_var;
						first_term=0;
						last_term=1;
						printf("Enter the Terms required:\n");
						scanf("%d",&required_term);
						printf("Fibonaaci Series are as follows:\n");
						printf("%d\t",first_term);
						printf("%d\t",last_term);
						for(counter_var=1;counter_var<=required_term-2;counter_var++)
						{
							total_term=first_term+last_term;
							printf("%d\t",total_term);
							first_term=last_term;
							last_term=total_term;
						}
						printf("\n");
					}
					break;
			case 3:
				{
					int gcd_cadit=1;
					int factor_arr1[20]={0};
					int factor_arr2[20]={0};
					int accpt_no1,accpt_no2,counter_i,counter_j,counter_k;
					counter_i=counter_j=0;
					printf("Enter the 2 No:\n");
					scanf("%d%d",&accpt_no1,&accpt_no2);
					counter_k=0;
					//Finding Factors of First Digit
					for(counter_i=1;counter_i<=accpt_no1;counter_i++)
					{
						if(accpt_no1%counter_i==0)
						{
							factor_arr1[counter_k]=counter_i;
							counter_k++;
						}
					}
					counter_k=0;
					//Finding Factors of Second Digit
					for(counter_j=1;counter_j<=accpt_no2;counter_j++)
					{
						if(accpt_no2%counter_j==0)
						{
							factor_arr2[counter_k]=counter_j;
							counter_k++;
						}
					}
					//Comparing both array's
					for(counter_i=0;counter_i<20;counter_i++)
					{
						for(counter_j=0;counter_j<20;counter_j++)
						{
							if(factor_arr1[counter_i]!=0 && factor_arr2[counter_j]!=0)
							{
							if(factor_arr1[counter_i]==factor_arr2[counter_j] )
							{
								gcd_cadit=factor_arr1[counter_i];
							}
							}
						}
					}
					printf("GCD of %d and %d is %d\n",accpt_no1,accpt_no2,gcd_cadit);
				}
				break;
			case 4:
					exit(0);
					break;
			default:
					printf("Invalid Option Encountered\n");
					printf("Try Again");
		}
	}
}

