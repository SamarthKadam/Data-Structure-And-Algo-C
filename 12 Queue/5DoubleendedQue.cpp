#include<stdio.h>
#include<stdlib.h>
struct Queu{
	int size;
	int front;
	int rear;
	int *Q;
};
void INSrear(struct Queu *ptr,int x)
{
	if(ptr->rear==ptr->size-1)
	{
		printf("Queue is full\n");
	}
	else{
		ptr->rear++;
		ptr->Q[ptr->rear]=x;
	}
}
int DELrear(struct Queu *ptr)
{
	int x=-1;
	if(ptr->front+1==ptr->rear)
	{
		printf("Queu is empty\n");
	}
	else{
		x=ptr->Q[ptr->rear];
		ptr->rear--;
	}
	return x;
}
void INSfront(struct Queu *ptr,int x)
{
	if(ptr->front!=-1)
	{
		ptr->Q[ptr->front]=x;
		ptr->front--;
		
	}
	else{
		printf("Can't insert element is full\n'");
	}
}
int DELfront(struct Queu *ptr)
{
	int x=-1;
	if(ptr->front==ptr->rear)
	{
		printf("Stack is empty\n");
		return x;
	}
	ptr->front++;
	x=ptr->Q[ptr->front];
	return x;
}
void display(struct Queu s)
{
	int i;
	//s.front=-1;
	s.front++;
	for(i=s.front;i<=s.rear;i++)
	{
		printf("%d\n",s.Q[i]);
	}
}
int main()
{
	struct Queu q;
	printf("Enter the size of queue\n");
	scanf("%d",&q.size);
	q.front=-1;
	q.rear=-1;
	q.Q=(int*)malloc(q.size*sizeof(int));
	INSrear(&q,7);
	INSrear(&q,2);
	INSrear(&q,4);
	INSrear(&q,5);
	INSrear(&q,9);
	display(q);
	return 0;
}
