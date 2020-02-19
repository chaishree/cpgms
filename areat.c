#include<stdio.h>
#include<math.h>
float main()
{
	float a, b, h, area;
	printf("Enter a:\n");
	scanf("%f", &a);
	printf("Enter b:\n");
	scanf("%f", &b);
	printf("Enter h:\n");
	scanf("%f", &h);
	area=0.5*(a+b)*h;
	printf("Area of a trapezium:%.2f\n", area);
}
