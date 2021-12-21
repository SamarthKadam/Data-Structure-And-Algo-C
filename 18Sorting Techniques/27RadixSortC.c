#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
void insert(int *p,int locate,struct Node **ptr)
{
	struct Node *temp=NULL;
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	t->data=*(p);
	t->next=NULL;
	if(ptr[locate]==NULL)
	{
	ptr[locate]=t;
    }
    else{
    	temp=ptr[locate];
    	while(temp->next!=NULL)
    	{
    		temp=temp->next;
		}
		temp->next=t;
	}
}
int FindMax(int arr[100],int n)
{
	int maxdigit=0;
	int i;
	int x;
	int q=0;
	for(i=0;i<n;i++)
	{
		x=arr[i];
		maxdigit=0;
		while(x!=0)
		{
			maxdigit++;
			x=x/10;
		}
		if(q<maxdigit)
		{
			q=maxdigit;
		}
	}
	return q;
}
void Reset(int arr[100],int n,struct Node **ptr)
{
	int i;
	struct Node *temp;
	int j=0;
	for(i=0;i<10;i++)
	{
		if(ptr[i]==NULL)
		{
			continue;
		}
		else{
			temp=ptr[i];
			while(temp!=NULL)
			{
				arr[j++]=temp->data;
				temp=temp->next;
			}
		}
	}
	
	for(i=0;i<10;i++)
	{
		ptr[i]=NULL;
	}
	
	printf("\n");
}
void Evaluate(int arr[100],int n)
{
	int locate;
	int div;
	int MaxDigit=FindMax(arr,n);
	struct Node **ptr=(struct Node**)malloc(10*sizeof(struct Node*));
	int i;
	int j;
	for(i=0;i<10;i++)
	{
		ptr[i]=NULL;
	}
	div=1;
    for(i=0;i<MaxDigit;i++)
	{
	for(j=0;j<n;j++)
	{
		locate=(arr[j]/div)%10;
		insert(&arr[j],locate,ptr);
	}
	Reset(arr,n,ptr);
	div=div*10;
     }
     
     
	printf("The sorted Array using Bin Sort\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
int main()
{
	int n;
	int arr[100];
	printf("Enter the size of your array\n");
	scanf("%d",&n);
	printf("Enter the elelments one by one\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	Evaluate(arr,n);
	return 0;
}
