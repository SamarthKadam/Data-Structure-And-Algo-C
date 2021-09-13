#include <stdio.h>////Need to fix this
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
int dele(struct Node **q);
void swap(int *x,int *y);
void insert(struct Node** a,int b);
int findMax(int A[],int n);
void CountSort(int A[],int n);

 int dele(struct Node **q)
 {
 	int x=-1;
 	struct Node *t=*q;
// 	while(t->next==NULL)
// 	{
//	 t=t->next;	
//	}
	x=t->data;
	*q=(*q)->next;
	free(t);
	return x;
 }
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
void insert(struct Node** a,int b)
{
	if(*a==NULL)
	{
	struct Node* t=(struct Node*)malloc(sizeof(struct Node));
	*a=t;
	t->data=b;
	t->next=NULL;
    }
    else{
    	struct Node *temp;
    struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	t->data=b;
	t->next=NULL;
	temp=*a;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=t;
}
	
}
int findMax(int A[],int n)
{
 int max=-1;
 int i;
 for(i=0;i<n;i++)
 {
 if(A[i]>max)
 max=A[i];
 }
 return max;
}
void CountSort(int A[],int n)
{
 int i,j,max;
 struct Node **C;
 max=findMax(A,n);
 C=(struct Node**)malloc(sizeof(struct Node*)*(max+1));

 for(i=0;i<max+1;i++)
 {
 C[i]=NULL;
 }
 for(i=0;i<n;i++)
 {
 	insert(&C[A[i]],A[i]);
 }

 i=0;j=0;
 while(i<max+1)
 {
 	while(C[i]!=NULL)
 	{
 		A[j++]=dele(&C[i]);
	}
	i++;
 }
}
int main()
{
 int A[]={11,13,7,12,3,16,9,24,16,5,10,3},n=12,i;
 CountSort(A,n);
 for(i=0;i<10;i++)
 printf("%d ",A[i]);
 printf("\n");
 return 0;
}
