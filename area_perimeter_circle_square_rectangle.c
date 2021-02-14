#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int side,length,breadth,radius,area,perimeter_square,perimeter_rectangle;
	float area_circle,perimeter_circle;
	int area_rectangle,area_square;
	printf("Enter the Side:\n");
	scanf("%d",&side);
	printf("Enter the Radius\n");
	scanf("%d",&radius);
	printf("Enter the Length and Breath\n");
	scanf("%d%d",&length,&breadth);
		area_square=side*side;
	printf("Area of Square =%d\n",area_square);
		perimeter_square=4*side;
	printf("Perimeter of Square=%d\n",perimeter_square);
		area_rectangle=length*breadth;
	printf("Area of Rectangle=%d\n",area_rectangle);
		perimeter_rectangle=2*(length+breadth);
	printf("Perimeter of Rectangle=%d\n",perimeter_rectangle);
		area_circle=3.14*radius*radius;
	printf("Area of Circle=%d\n",area_circle);
		perimeter_circle=2*3.14*radius;
	printf("Perimeter of Circle=%f",perimeter_circle);
	return 0;
}
