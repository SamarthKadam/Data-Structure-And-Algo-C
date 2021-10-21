#include<stdio.h>////Pretty rough implementation of priority ques
#include<stdlib.h>
int *ptr=NULL;
int n;
int inN=0;
int front=-1;
void evaluate()
{

	printf("Enter the size of your array\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	int i;
	for(i=0;i<n;i++)
	{
		ptr[i]=-1;
	}
	
}
void insert(int x)
{
	int i;
	if(ptr[0]==-1)
	{
		ptr[0]=x;
		inN++;
	}
	else{
		if(x<ptr[inN-1])
		{
			i=inN-1;
			while(x<ptr[i] &&i>=0)
			{
				ptr[i+1]=ptr[i];
				i--;
			}
			ptr[i+1]=x;
			
		}
		else{
		ptr[inN]=x;
	        }
		inN++;
	}
	
	
	
}
int dequeu()
{
	int x;
	if(front==inN-1)
	{
		printf("Queu is empty\n");
	}
	else{
		front++;
	x=ptr[front];
	}
	return x;
	
}
void display()
{
	int i;
	for(i=front+1;i<inN;i++)
	{
		printf("%d\n",ptr[i]);
	}
}
int main()
{
	evaluate();
	insert(5);
	insert(1);
	insert(2);
	insert(9);
	printf("%d\n",dequeu());
	printf("%d\n",dequeu());
	printf("%d\n",dequeu());
	printf("%d\n",dequeu());
	printf("%d\n",dequeu());
	display();
}
