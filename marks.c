#include"stdio.h"
int main()
{

int a[5],i,total,percentage;

	printf("Enter marks of five subjects\n");

		for(i=0;i<5;i++)
		{
		scanf("%d",&a[i]);
		}
	
	total=a[0]+a[1]+a[2]+a[3]+a[4];

	printf("Total of marks is %d\n",total);



return 0;

}
