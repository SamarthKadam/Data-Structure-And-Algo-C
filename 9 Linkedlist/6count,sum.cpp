#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *first=NULL;
void create(int A[],int n)
{
	int i;
	struct Node *t,*last;
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
	
}
int display(struct Node *ptr)
{
	int count;
	count=0;
	int sum=0;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		count=count+1;
		sum=sum+ptr->data;
		ptr=ptr->next;
	}
	printf("The sum of the linked list is %d\n",sum);
	return count;
}
int main()
{
	int answer;
	int A[]={3,5,7,10,15};
	int n=5;
	create(A,n);
	answer=display(first);
	printf("The size of the linked list is %d\n",answer);
	return 0;
}
