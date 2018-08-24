			//swap two numbers without using third variable
#include"stdio.h"
void main()
{

	int a,b;

	printf("Enter first number\n");
	scanf("%d",&a);

	printf("Enter second number\n");
	scanf("%d",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("value of a is %d\n",a);
	printf("value of b is %d",b);
}
