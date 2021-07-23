#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	int column;
	struct Node *next;
};
int main()
{
	int m;
	int n;
	int x;
	int i;
	int j;
	struct Node *t;
	printf("User please enter the size of row\n");
	scanf("%d",&m);
	printf("User please enter the size of column\n");
	scanf("%d",&n);
	struct Node *last;
	struct Node **A=(struct Node**)malloc(m*sizeof(struct Node*));
	for(i=0;i<m;i++)
	{
		A[i]=NULL;
	}
	for(i=0;i<m;i++)
	{
		
		for(j=0;j<n;j++)
		{
			scanf("%d",&x);
			if(x!=0)
			{
				t=(struct Node*)malloc(sizeof(struct Node));
				t->column=j;
				t->data=x;
				t->next=NULL;
				if(A[i]==NULL)
				{
				A[i]=t;
				last=t;
				}
				else{
					last->next=t;
					last=t;
				}
				
			}	
			}
	}
	for(i=0;i<m;i++)
	{
		t=A[i];
		for(j=0;j<n;j++)
		{
			if(t&&t->column==j)
			{
				printf("%d",t->data);
				t=t->next;
			}
			else{
				printf("0");
			}
		}
		printf("\n");
	}
	
	return 0;
	
}
