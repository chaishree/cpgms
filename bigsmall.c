#include<stdio.h>
int main()
{ 
	int a, b;
	printf("Enter a:\n");
	scanf("%d", &a);
	printf("Enter b:\n");
	scanf("%d", &b);
	
	if(a>b)
	{
		printf("%d is greater than %d\n", a, b);
	}
	else
	{
		printf("%d is smaller than %d\n", a, b);
	}
}
