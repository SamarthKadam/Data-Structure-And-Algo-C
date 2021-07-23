#include<stdio.h>///we can perfom peek in which we want the position of the element in the given position
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *top=NULL;
void push(int x)
{
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	if(t==NULL)
	{
		printf("Stack is full\n");
	}
	else{
		t->data=x;
		t->next=top;
		top=t;
	}
}
int pop()
{
	struct Node *t;
	int x=-1;
	if(top==NULL)
	{
		printf("Stack is empty\n");
		return -1;
	}
	else{
		t=top;
		top=top->next;
		x=t->data;
		free(t);
		return x;
	}
}
void display()
{
	struct Node *p=top;
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
}
int main()
{
	
push(10);
push(11);
push(32);
push(36);
display();
printf("\n");
printf("%d",pop());	
return 0;
}
