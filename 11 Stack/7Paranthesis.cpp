#include<stdio.h>
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
	char x;
	int i;
	for(i=0;exp[i]!='\0';i++)
	{
	if(exp[i]=='('||exp[i]=='['||exp[i]=='{')
	{
		push(exp[i]);
		
	}
	else if(exp[i]==')'||exp[i]==']'||exp[i]=='}')
	{
		if(top==NULL)
		{
			return 0;
		}
		x=pop();
		if(abs(exp[i]-x)>2)
		{
			return 0;
		}
		
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
