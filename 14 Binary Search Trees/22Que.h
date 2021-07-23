#include<stdlib.h>
#include<stdio.h>
struct Queu{
	int size;
	int front;
	int rear;
	struct Node **Q;
};
void create(struct Queu *ptr,int size)
{
	ptr->size=size;
	ptr->front=ptr->rear=0;
	ptr->Q=(struct Node**)malloc(ptr->size*sizeof(struct Node*));
}
void enque(struct Queu *ptr,struct Node *x)
{
	if((ptr->rear+1)%ptr->size==ptr->front)
	{	
		printf("Queu is full\n");
	}
	else{
		ptr->rear=ptr->rear+1%ptr->size;
		ptr->Q[ptr->rear]=x;
    	}
	
}
struct Node* deque(struct Queu *ptr)
{
	struct Node *x=NULL;
	if(ptr->front==ptr->rear)
	{
		printf("Queu is empty\n");
	}
	else{
		ptr->front=(ptr->front+1)%ptr->size;
		x=ptr->Q[ptr->front];
	}
	return x;
}
int isEmpty(struct Queu q)
{
	if(q.front==q.rear)
	{
		return 1;
	}
	else 
	{
	return 0;
	}
}
