#include<stdio.h>
#include<math.h>
float main()
{
	float r, theta, area;
	printf("Enter r:\n");
	scanf("%f", &r);
	printf("Enter theta:\n");
	scanf("%f", &theta);
	area=0.5*r*r*theta;
	printf("Area of a sector:%.2f\n", area);
}
