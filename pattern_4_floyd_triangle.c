#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int ioter,joter,counter;
	for(ioter=1;ioter<=5;ioter++)
	{
		counter=1;
		for(joter=1;joter<=ioter;joter++)
		{
			//counter=1;
			printf("%d\t",counter);
			counter++;
		}
		printf("\n");
	}
}
