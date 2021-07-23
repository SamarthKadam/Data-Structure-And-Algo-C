#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	class Node *next;
};
int main()
{
	int i=0;
	int arr[]={1,2,3,4};
	int n=4;
	Node *head=new Node;
	Node *temp;
	Node *last;
	head->data=arr[0];
	head->next=NULL;
	last=head;
	for(i=1;i<n;i++)
	{
		temp=new Node;
		temp->data=arr[i];
		temp->next=NULL;
		
		last->next=temp;;
		last=temp;
	}
	
	Node *p=head;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}	
	return 0;

	}
