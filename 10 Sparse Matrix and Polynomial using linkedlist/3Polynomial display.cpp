#include<stdio.h>
#include<stdlib.h>
struct Node{
	int coef;
	int exp;
	struct Node *next;
};
struct Node *first=NULL;
void create(int x)
{
	int i;
	struct Node *t=NULL;
	struct Node *last=NULL;
	first=(struct Node*)malloc(sizeof(struct Node));
	scanf("%d%d",&first->coef,&first->exp);
	first->next=NULL;
	last=first;
	for(i=1;i<x;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		scanf("%d%d",&t->coef,&t->exp);
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d  %d \n",ptr->coef,ptr->exp);
		ptr=ptr->next;
	}
}
int main()
{
	int x;
	printf("Enter the number of exponents\n");
	scanf("%d",&x);
	printf("Enter the coef and exp one by one\n");
	create(x);
	display(first);
	return 0;
	
}
