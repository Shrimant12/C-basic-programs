			//Program to find Area and Circumference of Circle//
#include"stdio.h"
#define pi 3.14
int main()
{

int r;
float area,circum;


printf("Enter the value of radius\n");
scanf("%d",&r);


area=pi*r*r;
circum=2*pi*r;

printf("Area of circle is %f\n",area);

printf("Circumference of Circle is %f\n",circum);

return 0;

}
