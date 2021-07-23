#include<stdio.h>
#include<stdlib.h>
struct Stack{
	int len;
	int top;
	int *s;
};
void create(struct Stack *ptr,int n)
{
	ptr->len=n;
	ptr->s=(int*)malloc(ptr->len*sizeof(int));
	ptr->top=-1;
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
void enque(struct Stack *ptr,int x)
{
	push(ptr,x);
}
int deque(struct Stack *s1,struct Stack *s2)
{
	int x=-1;
	if(isEmpty(*s2))
	{
		if(isEmpty(*s1))
		{
			printf("Queu is empty\n");
		}
		else{
			while(!isEmpty(*s1))
			{
				push(s2,pop(s1));
			}
			
		}
	}
	return pop(s2);
}
int main()
{
	int n;
	printf("ENter the size of your stack\n");
	scanf("%d",&n);
	struct Stack s1;
	struct Stack s2;
	create(&s1,n);
	create(&s2,n);
	enque(&s1,10);
    enque(&s1,23);
    enque(&s1,25);
    enque(&s1,89);
	printf("%d",deque(&s1,&s2));
	return 0;
}
