#include<stdio.h>
#include<stdlib.h>
struct Stack{
	int len;
	int top;
	int *s;
};
void create(struct Stack *ptr)
{
	ptr->s=(int*)malloc(ptr->len*sizeof(int));
}
void push(struct Stack *ptr,int x)
{
	if(ptr->top==ptr->len-1)
	{
		printf("Stack overflow\n");
	}
	else{
		ptr->top++;
		ptr->s[ptr->top]=x;	
	}
	
	
}
void display(struct Stack q)
{
	int i;
	for(i=q.top;i>=0;i--)
	{
		printf("%d",q.s[i]);
	}
	printf("\n");
}
int pop(struct Stack *ptr)
{
	int x=-1;
	if(ptr->top==-1)
	{
		printf("Stack underflow\n");
	}
	else{
		x=ptr->s[ptr->top];
		ptr->top--;
	}
	return x;
}
int peek(struct Stack s,int pos)
{
	int x=-1;
	if(s.top-pos+1<0)
	{
		printf("Invalid index\n");
    }
    x=s.s[s.top-pos+1];
    return x;
}
int isEmpty(struct Stack s)
{
	if(s.top==-1)
	{
		return 1;
	}
	else{
		return 0;
	}
}
int isFull(struct Stack s)
{
	if(s.top==s.len-1)
	{
		return 1;
	}
	else{
		return 0;
	}
}
int Top(struct Stack s)
{
	if(!isFull(s))
	{
		return s.s[s.top];
	}
	else{
		return -1;
	}
}
int main()
{
	struct Stack s;
	printf("Enter the size of the stack\n");
	scanf("%d",&s.len);
	s.top=-1;
	create(&s);
	push(&s,10);
	push(&s,20);
	push(&s,30);
	push(&s,40);
	display(s);
	printf("\n");
	printf("%d",peek(s,2));
	return 0;
}
