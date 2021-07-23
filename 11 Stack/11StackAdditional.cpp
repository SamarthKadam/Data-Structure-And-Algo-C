#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
int Preoutstack(char x)
{
	if(x=='+'|| x=='-')
	{
		return 1;
	}
	else if(x=='*'||x=='/')
	{
		return 3;
	}
	else if(x=='^')
	{
		return 6;
	}
	else if(x=='(')
	{
		return 7;
	}
	else if(x==')')
	{
		return 0;
	}
}
int isOperand(char x)
{
	if(x=='+'||x=='-'||x=='*'||x=='/'||x==')'||x=='('||x=='^')
	{
		return 0;
	}
	else{
		return 1;
	}
}
int Preinstack(char x)
{
	if(x=='+'||x=='-')
	{
		return 2;
	}
	else if(x=='*'||x=='/')
	{
		return 4;
	}
	else if(x=='^')
	{
		return 5;
	}
	else if(x=='(')
	{
		return 0;
	}
	
}
char* inpost(char *infix)
{
	int i=0,j=0;
	char *postfix;
	int len=strlen(infix);
	postfix=(char*)malloc(len+2*sizeof(char));
	while(infix[i]!='\0')
	{
		if(isOperand(infix[i]))
		{
			postfix[j++]=infix[i++];
		}
		else{
			if(top==NULL|| Preoutstack(infix[i])>Preinstack(top->data))
			{
				push(infix[i++]);
			}
			else if(Preoutstack(infix[i])==Preinstack(top->data))
			{
				pop();
				i++;
			}
			else{
				postfix[j++]=pop();
			}
		}
	}
	while(top!=NULL)
	{
		postfix[j]=pop();
		j++;
	}
	postfix[j]='\0';
	return postfix;
}
int main()
{
	char *infix="((a+b)*c)-d^e^f";
	char *postfix=inpost(infix);
	printf("%s",postfix);
	return 0;
}
