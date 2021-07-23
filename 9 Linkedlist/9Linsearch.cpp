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
struct Node* search(struct Node *ptr,int key)
{
	while(ptr!=NULL)
	{
		if(ptr->data==key)
		{
			return ptr;
		}
		ptr=ptr->next;
	}
	return NULL;
}
int main()
{
	int key;
	printf("Enter which element you want to find ,you'll get its addres ");
	scanf("%d",&key);
	int A[]={3,5,7,10,15};
	int n=5;
	create(A,n);
	struct Node *answer=search(first,key);
	printf("The address of the key is %d",answer);
	return 0;
}
