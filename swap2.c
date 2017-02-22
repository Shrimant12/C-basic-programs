			//swap two numbers without using third variable
#include"stdio.h"
int main()
{

int a,b;

printf("Enter first number\n");
scanf("%d",&a);

printf("Enter second number\n");
scanf("%d",&b);

a=a+b;
b=a-b;
a=a-b;

printf("value of a is %d",a);
printf("\n");
printf("value of b is %d",b);

return 0;
}
