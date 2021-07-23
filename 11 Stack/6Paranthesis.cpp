#include<stdio.h>///we can perfom peek in which we want the position of the element in the given position
#include<stdlib.h>
struct Node{
	char data;
	struct Node *next;
};
struct Node *top=NULL;
void push(char x)
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
char pop()
{
	struct Node *t;
	char x=-1;
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
int isbalanced(char *exp)
{
	int i;
	for(i=0;exp[i]!='\0';i++)
	{
	if(exp[i]=='(')
	{
		push(exp[i]);
		
	}
	else if(exp[i]==')')
	{
		if(top==NULL)
		{
			return 0;
		}
		pop();
	}
    }
    if(top==NULL)
    {
    	return 1;
	}
	else{
		return 0;
	}
}
int main()
{
	char *exp="((A+B)+(C+D))";
	printf("%d",isbalanced(exp));
	return 0;
}
