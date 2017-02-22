			//Program to Calculate sum of 5 subjects and percentage

#include"stdio.h"
int main()
{

int marks[5],i,total,percent;

	printf("Enter marks of 5 subjects\n");
	
	for(i=0;i<5;i++)
	{
	scanf("%d",&marks[i]);
	}

total=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];

printf("Total is %d\n",total);

percent=total/100;

printf("Percentage obtained is %d\n",percent);




return 0;
}
