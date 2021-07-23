#include<stdio.h>
#include<stdlib.h>
struct Node{
	int coef;
	int exp;
	struct Node *next;
};
struct Node *first=NULL;
struct Node *second=NULL;
struct Node *third=NULL;
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
void createe(int x)
{
	int i;
	struct Node *t=NULL;
	struct Node *last=NULL;
	second=(struct Node*)malloc(sizeof(struct Node));
	scanf("%d%d",&second->coef,&second->exp);
	second->next=NULL;
	last=second;
	for(i=1;i<x;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		scanf("%d%d",&t->coef,&t->exp);
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void Add(struct Node *p,struct Node *q)
{
	struct Node *last=NULL;
	struct Node *temp=NULL;
	third=(struct Node*)malloc(sizeof(struct Node));
	if(p->exp>q->exp)
	{
		third->coef=p->coef;
		third->exp=p->exp;
		third->next=NULL;
		last=third;
		p=p->next;
	}
	else if(p->exp<q->exp){
		third->coef=q->coef;
		third->exp=q->exp;
		third->next=NULL;
		last=third;
		q=q->next;
	}
	else{
		third->coef=p->coef+q->coef;
		third->exp=p->exp;
		third->next=NULL;
		last=third;
		p=p->next;
		q=q->next;
	}	
	while(p&&q)
	{
		temp=(struct Node*)malloc(sizeof(struct Node));
		if(p->exp>q->exp)
		{
			temp->coef=p->coef;
			temp->exp=p->exp;
			last->next=temp;
			temp->next=NULL;
			last=temp;
			p=p->next;
		}
		else if(p->exp<q->exp)
		{
			temp->coef=q->coef;
		temp->exp=q->exp;
		temp->next=NULL;
		last->next=temp;
		last=temp;
		q=q->next;	
		}
		else{
			temp->coef=p->coef+q->coef;
		temp->exp=p->exp;
		temp->next=NULL;
		last->next=temp;
		last=temp;
		p=p->next;
		q=q->next;
		}
		
	}
	if(p==NULL)
	{
		last->next=q;
	}
    else
	{
	last->next=p;	
	}
}
int main()
{
	int x;
	printf("Enter the coef and exp one by one\n");
	create(3);
	printf("Enter the coef and exp one by one\n");
	createe(3);
	Add(first,second);
	display(third);
	return 0;
	
}
