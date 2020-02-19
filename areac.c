#include<stdio.h>
#include<math.h>
float main()
{
	float radius, area;
	printf("Enter the radius of a circle:\n");
	scanf("%f", &radius);
	area=3.142*radius*radius;
	printf("Area of a circle=%.2f\n",area);
}
