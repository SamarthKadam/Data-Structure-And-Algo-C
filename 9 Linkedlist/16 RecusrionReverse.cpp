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
void display(struct Node *ptr)
{
while(ptr!=NULL)
{
printf("%d ",ptr->data);
ptr=ptr->next;
}
}
void reverse(struct Node *p,struct Node *q)
{
if(q!=NULL)
{
reverse(q,q->next);
q->next=p; // q shold point on previous node p
}
else{
first=p; // when q is null, p will be on last node. fist should be p
}
}
int main()
{
int arr[]={10,2,5,6,7,4,2,1};
create(arr,8);
// display(first);
 
reverse(NULL,first);
display(first);
return 0;
}
