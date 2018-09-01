#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int a,b,c;
	
	if(argc < 1)
	{
		printf("Enter argumnets only Eg. filename value1 value2 value3");
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = atoi(argv[3]);
		
		//check for positive values
		
		if(a<0 || b<0 || c<0)
		{
			printf("Enter positive values only");
			
			return 1;
			
		}
	
		if( a==b && b==c && a==c )
		{
			printf("Enter different numbers only");
			return 1;
		}
		else
		{
			if(a > b && a > c)
			{
				printf("A is greatest\n");
			}
			else if(b>c)
			{
				printf("B is greatest\n");
			}
			else
			{
				printf("C is greates\n");
			}	
		
		}
		
	
	}
	


return 0;
}
