#include<stdio.h>//It is better to select que for reusability of the variables 
#include<stdlib.h>
struct Queu{
	int size;
	int front;
	int rear;
	int *Q;
};
void enqueu(struct Queu *ptr,int x)
{
	if((ptr->rear+1)%ptr->size==ptr->front)
	{
		printf("Queue is full\n");
	}
	else{
		ptr->rear=(ptr->rear+1)%ptr->size;
		ptr->Q[ptr->rear]=x;
	}
}
int dequeu(struct Queu *ptr)
{
	int x=-1;
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
void display(struct Queu s)
{
	int i=s.front+1;
	do
	{
		printf("%d",s.Q[i]);
		i=(i+1)%s.size;
	}while(i!=(s.rear+1)%s.size);
}
int main()
{
	struct Queu q;
	printf("Enter the size of queue\n");
	scanf("%d",&q.size);
	q.front=0;
	q.rear=0;
	q.Q=(int*)malloc(q.size*sizeof(int));
	enqueu(&q,10);
	enqueu(&q,20);
	enqueu(&q,30);
	display(q);
	printf("The deleted item is  %d\n",dequeu(&q));
	return 0;
}
