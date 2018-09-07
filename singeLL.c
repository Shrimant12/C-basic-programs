#include<stdio.h>
//#include<alloc.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *next;

};




int main()
{
	struct node *s;
	struct node *p;


	//malloc bydefault returns void pointer but s is a structure pointer
	s = (struct node*)malloc(sizeof(struct node));
	//this we used for dyanamic memory allocation
	s -> info = 20;
	s -> next = p;

	p = (struct node*)malloc(sizeof(struct node));
	
	p -> info = 230;
	p -> next = NULL;
			
	
	printf("%d",s->info);
	printf("%d",p->info);

return 0;
}
