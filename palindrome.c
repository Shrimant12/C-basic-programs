#include<stdio.h>

int main()
{
	int n, originalnumber, revstring=0,remainder;
	
	//printf("Enter a number to check if its palindrome or not");
	scanf("%d",&n);

	   originalnumber = n;

	while(n>0)
	{
		remainder = n%10;
		revstring = revstring*10 + remainder;
		n = n/10;	
	
	}
	
	if(originalnumber == revstring)
	{
		printf("Number is palindrome\n");
	}
	else
	{
		printf("Number is not palindrome\n");
	}


return 0;
}
