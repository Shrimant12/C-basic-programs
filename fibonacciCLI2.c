#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int n,count,t1=0,t2=1,nextTerm;
	
	if(argc < 1)
	{
		printf("Enter arguments from CLI only");
	}	
	else
	{
		n = atoi(argv[1]);
		printf("fibonacci series of %d is \n",n);
	
		for(count=0; count<n; count++)
		{
			if(count <= 1)
			{
			 nextTerm = count;
			}
			else
			{
				nextTerm = t1 + t2;
				t1 = t2;
				t2 = nextTerm;
			
			
			}	
			printf("%d\n",nextTerm);
		}

	}
return 0;
}
