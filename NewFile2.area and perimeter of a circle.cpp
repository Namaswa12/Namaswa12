//calculating the area of a circle and perimeter
#include <stdio.h>
#include <math.h>
int main() 
{
	float pi= 3.14159 ,radius, perimeter, area;
	printf("enter the radius");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("\narea of a circle = %f" , area);
	perimeter =2*pi*radius;
	printf("\nperimeter of a circle= %f",perimeter);

}