#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int i,x,y,f=1;
		
	x = atoi(argv[1]);	
	
	if(argc < 1)
	{
		printf("Enter only arguments");
	
		return 1;
		
	}
	else
	{
		for(i=1; i<=x; i++)
		{
			f = f*i;
		
		}
	printf("%d",f);
	
	}
		

return 0;
}
