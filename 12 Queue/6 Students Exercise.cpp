#include<stdio.h>
#include<stdlib.h>
struct Node {
	char data;
	struct Node *next;
};
struct Node *first=NULL;
struct Node *second=NULL;
struct Node *third=NULL;
struct Node *l1=NULL;
struct Node *l2=NULL;
struct Node *l3=NULL;
void create(char arr[],int arrP[])
{
	int i=0;
	int j=0;
	struct Node *t;
//	printf("Below are the priority of the elements\n");
//	for(i=0,j=0;i<9&&j<9;i++,j++)
//	{
//		printf("%c=%d\n",arr[i],arrP[j]);
//	}
	for(i=0,j=0;i<9&&j<9;i++,j++)
	{
		if(arrP[j]==1)
		{
			t=(struct Node*)malloc(sizeof(struct Node));
			t->data=arr[i];
			t->next=NULL;
			if(first==NULL)
			{
				first=t;
				l1=t;
			}
			else{
				l1->next=t;
				l1=t;
			}
		}
		else if(arrP[j]==2)
		{
			t=(struct Node*)malloc(sizeof(struct Node));
			t->data=arr[i];
			t->next=NULL;
			if(second==NULL)
			{
				second=t;
				l2=t;
			}
			else{
				l2->next=t;
				l2=t;
			}
		}
		else if(arrP[j]==3)
		{
				t=(struct Node*)malloc(sizeof(struct Node));
			t->data=arr[i];
			t->next=NULL;
			if(third==NULL)
			{
				third=t;
				l3=t;
			}
			else{
				l3->next=t;
				l3=t;
			}
		}
	}
}
void display()
{
	struct Node *ptr;
	while(ptr!=NULL)
	{
		printf("%c\n",ptr->data);
		ptr=ptr->next;
	}
}
char dequeu()
{
	char x;
	struct Node *epic=NULL;
	if(first)
	{
		epic=first;
		first=first->next;
		x=epic->data;
		free(epic);
		return x;
	}
	else if(second)
	{
		epic=second;
		second=second->next;
		x=epic->data;
		free(epic);
		return x;
	}
	else if(third)
	{
		epic=third;
		third=third->next;
		x=epic->data;
		free(epic);
		return x;
	}
	else {
		printf("Queu is empty\n");
		return 0;
	}
	
}
void enque(char x,int pri)
{
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	t->data=x;
	t->next=NULL;
	if(pri==1)
	{
		if(first==NULL)
		{
			first=t;
			l1=t;
		}
		else{
			l1->next=t;
			l1=t;
		}
	}
	else if(pri==2)
	{
        if(second==NULL)
			{
				second=t;
				l2=t;
			}
			else{
				l2->next=t;
				l2=t;
			}	
			
	}
	else if(pri==3)
	{
			if(third==NULL)
			{
				third=t;
				l3=t;
			}
			else{
				l3->next=t;
				l3=t;
			}
		
	}
}
int main()
{
	char arr[]={'A','B','C','D','E','F','G','H','I'};
	int arrP[]={1,2,2,1,1,3,3,1,3};
	create(arr,arrP);
	printf("%c\n",dequeu());
	printf("%c\n",dequeu());
	printf("%c\n",dequeu());
	printf("%c\n",dequeu());
	printf("%c\n",dequeu());
	printf("%c\n",dequeu());
	printf("%c\n",dequeu());
	printf("%c\n",dequeu());
	printf("%c\n",dequeu());
	printf("\n");
	printf("FULL ELEMENTS ARE DELTED\n");
	printf("Now we insert j k l\n");
	enque('J',1);
	enque('K',1);
	enque('L',2);
	enque('M',3);
	enque('N',3);
	printf("%c\n",dequeu());
	printf("%c\n",dequeu());
	printf("%c\n",dequeu());
	enque('O',1);
	enque('P',1);
	printf("\n");
	printf("OBSERVE HERE\n");
	printf("%c\n",dequeu());
	printf("%c\n",dequeu());
	printf("%c\n",dequeu());
	printf("%c\n",dequeu());
	printf("%c\n",dequeu());
	return 0;
}
