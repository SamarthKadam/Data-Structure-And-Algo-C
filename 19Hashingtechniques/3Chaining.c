#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node **ptr=NULL;
int Hashing(int *p)
{
	struct Node *temp=NULL;
	struct Node *cat=NULL;
	struct Node *y=NULL;
	int location=(*p)%10;
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	t->data=*p;
	t->next=NULL;
	if(ptr[location]==NULL)
	{
		ptr[location]=t;
	}
	else{
		temp=ptr[location];
		if(t->data<temp->data)
		{
			t->next=temp;
			temp=t;
			ptr[location]=temp;
		}
		else{
		while(temp!=NULL&& t->data>temp->data)
		{
			cat=temp;
			temp=temp->next;
		}
		t->next=cat->next;
		cat->next=t;
	    }
	}
}
void Chaining(int arr[100],int n)
{
	ptr=(struct Node**)malloc(10*sizeof(struct Node*));
	int i;
	for(i=0;i<10;i++)
	{
		ptr[i]=NULL;
	}
	for(i=0;i<n;i++)
	{
		Hashing(&arr[i]);
	}
	
}
int Search(int x)
{
	printf("\n");
	int i;
	struct  Node *temp;
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
				if(x==temp->data)
				{
					printf("Element found\n");
					return 0;
				}
//             printf("%d\n",temp->data);
            temp=temp->next;
			}
		}
	}
	printf("Element Not found\n");
	
}
int Deleting(int y)
{
	struct Node *check=NULL;
	struct Node *tap=NULL;
	int i;
	for(i=0;i<10;i++)
	{
		if(ptr[i]==NULL)
		{
			continue;
		}
		else{
			check=ptr[i];
			if(check->data==y)
			{
				ptr[i]=check->next;
				free(check);
				printf("Value was found and it was deleted\n");
				return 0;
			}
			while(check!=NULL)
			{
				if(check->data==y)
				{
					tap->next=check->next;
					free(check);
					printf("Value was found and it was deleted\n");
					return 0;
				}
				tap=check;
				check=check->next;
			}
			
		}
	}
	printf("Element can't be deleted because Element not present\n");
}
void display()
{
	int i;
	struct Node *check=NULL;
	for(i=0;i<10;i++)
	{
		if(ptr[i]==NULL)
		{
			continue;
		}
		else{
			check=ptr[i];
			while(check!=NULL)
			{
				printf("%d\t",check->data);
				check=check->next;
			}
		}
	}
}
int main()
{
	int n;
	int x;
	printf("Enter the size of n\n");
	scanf("%d",&n);
	printf("Enter the Element you wanna Delete\n");
	scanf("%d",&x);
	int i;
	int arr[100];
	printf("Enter the element one by one\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	Chaining(arr,n);
//	Search(x);
	Deleting(x);
	display();
	return 0;
}

