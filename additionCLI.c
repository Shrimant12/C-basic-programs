#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int a,b,result;
	
	if(argc < 1)
	{
		printf("Enter arguments only\n");
		return 1;
		
	}
	else
	{
		//argv[0] will have file location stored in it
		
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		
		result = a + b;
		
	
		printf("addition is %d \n",result);
	
	
	}
	


return 0;
}
