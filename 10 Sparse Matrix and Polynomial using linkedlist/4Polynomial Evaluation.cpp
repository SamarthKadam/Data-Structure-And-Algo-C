#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Node{
	int coef;
	int exp;
	struct Node *next;
};
int answer=0;
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
int evaluate(struct Node *ptr,int a)
{
	while(ptr!=NULL)
	{
		answer=answer+pow(a,ptr->exp)*ptr->coef;
		ptr=ptr->next;
	}
	return answer;
}
int main()
{
	int value;
	int x;
	int in;
	printf("Enter the value of x\n");
	scanf("%d",&x);
	printf("Enter the number of exponents\n");
	scanf("%d",&in);
	printf("Enter the coef and exp one by one\n");
	create(in);
	value=evaluate(first,x);
	printf("%d",value);
	return 0;
	
}
