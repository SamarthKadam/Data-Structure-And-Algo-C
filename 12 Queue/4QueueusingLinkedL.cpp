#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *first=NULL;
struct Node *last=NULL;
void enqueu(int x)
{
	struct Node *t;
	t=(struct Node*)malloc(sizeof(struct Node));
	t->data=x;
	t->next=NULL;
	if(t==NULL)
	{
		printf("Queu is full\n");
	}
	else{
		if(first==NULL)
		{
			
			first=last=t;
		}
		else{
			last->next=t;
			last=t;
		}
		
	}
	
}
int dequeu()
{
	int x=-1;
	struct Node *ptr;
	if(first==NULL)
	{
		printf("QUEU IS EMPTY\n");
	}
	else{
		ptr=first;
		first=first->next;
		x=ptr->data;
		free(ptr);
	}
	return x;
}
void display(struct Node *s)
{
	while(s!=NULL)
	{
		printf("%d",s->data);
		s=s->next;
	}
}
int main()
{
	enqueu(12);
	enqueu(13);
	enqueu(15);
	display(first);
	printf("\n");
	printf(" The element poped out is %d",dequeu());
	printf("The element poped out is %d",dequeu());
	return 0;
}
