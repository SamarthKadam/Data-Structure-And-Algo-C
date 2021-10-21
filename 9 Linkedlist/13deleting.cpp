//#include<stdio.h>
//#include<stdlib.h>
//struct Node{
//	int data;
//	struct Node *next;
//};
//struct Node *root=NULL;
//void create(int A[],int n)
//{
//	int i;
//	struct Node *p=NULL;
//	struct Node *temp=NULL;
//	struct Node *f;
//	p=(struct Node*)malloc(sizeof(struct Node));
//	root=p;
//	p->data=A[0];
//	p->next=NULL;
//	temp=p;
//	for(i=1;i<n;i++)
//	{
//		f=(struct Node*)malloc(sizeof(struct Node));
//		f->data=A[i];
//		f->next=NULL;
//		temp->next=f;
//		temp=f;
//    }
//	
//}
//void display()
//{
//	struct Node *ptr=root;
//	while(ptr!=NULL)
//	{
//		printf("%d\n",ptr->data);
//		ptr=ptr->next;
//	}
//}
//int delee(struct Node *ptr,int pos)
//{
//	int x;
//	int i;
//	struct Node *t=ptr;
//	struct Node *cat=NULL;
//	if(pos==0)
//	{
//		root=root->next;
//		x=ptr->data;
//		free(ptr);
//		return x;
//	}
//	else{
//		for(i=0;i<=pos-1;i++)
//		{
//			cat=t;
//			t=t->next;
//		}
//		x=t->data;
//		cat->next=t->next;
//		free(t);
//		return x;
//}
//}
//int main()
//{
//	int value=0;
//	int n=5;
//	struct Node *l;
//	int A[]={10,20,30,40,50};
//	create(A,n);
//	l=root;
//	value=delee(l,5);
//	printf("The deleted value is %d\n",value);
//	display();
//	return 0;
//}
//
//
//

#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *first;
void create(int arr[],int n)
{
	int i;
	struct Node *t;
	struct Node *last;
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=arr[0];
	first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=arr[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
	
	
}
display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
int remove(struct Node *ptr,int index)
{
	int i;
	int x;
	struct Node *run=NULL;
	struct Node *move;
	if(index==0)
	{
		move=first;
		x=first->data;
		first=first->next;
		free(move);
		return x;
	}
	else{
		
		for(i=0;i<index-1;i++)
		{
			run=ptr;
			ptr=ptr->next;
		}
		run->next=ptr->next;
		x=ptr->data;
		free(ptr);
		return x;
	}
}
int main()
{
	int value;
	int arr[]={10,20,30,40,50};
	create(arr,5);
	value=remove(first,1);
	printf("%d",value);
	return 0;
}

///Above program pass all the test cases (in the top) 2nd one fails for the give test case
