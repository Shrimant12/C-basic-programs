#include"stdio.h"
int main()
{
int x = 4;
int *p = &x;
int *k = p++;
int r = p-k;
printf("R is %d %d\n",r);



return 0;
}
