#include<stdio.h>
#include<math.h>
float main()
{
	float b, h, area;
	printf("Enter b:\n");
	scanf("%f", &b);
	printf("Enter h:\n");
	scanf("%f", &h);
	area=3.142*b*h;
	printf("Area of a parallelogram:%.2f\n", area);
}
