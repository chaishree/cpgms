#include<stdio.h>
int main()
{
	int a, b, temp;
	printf("Enter a:\n");
	scanf("%d", &a);
	printf("Enter b:\n");
	scanf("%d", &b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping a=%d\n",a);
	printf("After swapping b=%d\n",b);
}
