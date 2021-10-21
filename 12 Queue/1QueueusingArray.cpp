#include<stdio.h>
#include<stdlib.h>
struct Queu{
	int size;
	int front;
	int rear;
	int *Q;
};
void enqueu(struct Queu *ptr,int x)
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
int dequeu(struct Queu *ptr)
{
	int x=-1;
	if(ptr->front==ptr->rear)
	{
		printf("Queu is empty\n");
	}
	else{
		ptr->front++;
		x=ptr->Q[ptr->front];
	}
	return x;
}
void display(struct Queu s)
{
	int i;
	s.front=-1;
	s.front++;
	for(i=s.front;i<=s.rear;i++)
	{
		printf("%d",s.Q[i]);
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
	enqueu(&q,2);
	enqueu(&q,5);
	enqueu(&q,9);
	display(q);
	printf("The deleted item is  %d\n",dequeu(&q));
	return 0;
}
