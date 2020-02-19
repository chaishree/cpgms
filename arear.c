#include<stdio.h>
#include<math.h>
float main()
{
	float length, breadth, area;
	printf("Enter length:\n");
	scanf("%f", &length);
	printf("Enter breadth:\n");
	scanf("%f", &breadth);
	area=length*breadth;
	printf("Area of a rectangle:%.2f\n", area);
}
