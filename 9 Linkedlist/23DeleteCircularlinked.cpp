//#include<stdio.h>
//#include<stdlib.h>
//struct Node{
//	int data;
//	struct Node *next;
//};
//struct Node *first=NULL;
//void create(int A[],int n)
//{
//	int i;
//	struct Node *p=NULL;
//	struct Node *temp=NULL;
//	struct Node *f;
//	p=(struct Node*)malloc(sizeof(struct Node));
//	first=p;
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
//    temp->next=first;
//	
//}
//
//void display(struct Node *ptr)
//{
//	do{
//		printf("%d\n",ptr->data);
//		ptr=ptr->next;
//	}while(ptr!=first);
//	
//}
//int Delete(int pos)
//{
//	int x;
//	int i;
//	struct Node *p;
//	struct Node *a;
//	struct Node *b;
//	struct Node *t;
//	if(pos==1)
//	{
//		p=first;
//		do{
//			p=p->next;
//		}while(p->next!=first);
//		t=first;
//		first=first->next;
//		p->next=first;
//		x=t->data;
//		free(t);
//		return x;
//	}
//	else if(pos<=6)
//	{
//		a=NULL;
//		b=first;
//		for(i=1;i<=pos-1;i++)
//		{
//			a=b;
//			b=b->next;
//		}
//		a->next=b->next;
//		x=b->data;
//		free(b);
//		return x;
//		
//	}
//	
//}
//int main()
//{
//	int value=0;
//	int n=7;
//	struct Node *l;
//	int A[]={10,20,30,40,50,60,70};
//	create(A,n);
//	Delete(1);
//	Delete(6);
//	display(first);
//	return 0;
//}
//

#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *first=NULL;
void create(int arr[],int n)
{
	int i;
	struct Node *temp;
	struct Node *last;
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=arr[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++)
	{
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->data=arr[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
	
}
void link(struct Node *ptr)
{
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=first;
}
void display(struct Node *ptr)
{
	do{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}while(ptr!=first);
}
int remove(struct Node *head,int pos)
{
	int x;
	struct Node *p=first;
	if(pos==1)
	{
		while(p->next!=first)
		{
			p=p->next;
		}
		x=head->data;
		if(p==head)
		{
			free(head);
			head=NULL;
		}
		else{
			p->next=head->next;
			free(head);
			head=p->next;
		}
	}
	else{
		p=NULL;
		head=first;
		for(int i=0;i<pos-2;i++)
		{
			head=head->next;
		}
		p=head->next;
		x=p->data;
		head->next=p->next;
		free(p);
			
		}
	return x;
}

int main()
{
	int value;
	int arr[]={2,4,6,7,9,10};
	create(arr,6);
	link(first);
	remove(first,1);
	remove(first,5);
	display(first);
	return 0;
	
}
