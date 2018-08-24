#include"stdio.h"
#include"stdlib.h"

int main(int argc, char *argv[])
{
	int i,n,t1=0,t2=1,nextTerm;
	
	printf("Enter a number to find its fibonacci series\n");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("%d ",t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;		
	}
return 0;
}
