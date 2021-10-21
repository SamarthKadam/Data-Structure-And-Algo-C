#include<stdio.h>
#include<stdlib.h>
struct Arr{
	int *A;
	int lenght;
};
int x,y;
void function1(struct Arr *ptr)
{
	
	ptr->A=(int*)malloc((ptr->lenght)*sizeof(int));
	int i;
	printf("Enter the number one by one for the given n range\n");
	for(i=0;i<ptr->lenght;i++)
	{
		scanf("%d",&ptr->A[i]);
	}
}
void function2(struct Arr *ptr)
{
	int i;
	ptr->lenght++;
	ptr->A=(int*)realloc(ptr->A,ptr->lenght);
	for(i=ptr->lenght;i>y;i--)
	{
		ptr->A[i]=ptr->A[i-1];
	}
	ptr->A[y]=x;
	
}
void display(struct Arr ar)
{
	int i;
	for(i=0;i<ar.lenght;i++)
	{
		printf("%d\n",ar.A[i]);
	}
}
int main()
{
	struct Arr ar;
	printf("User please enter the size of your array\n");
	scanf("%d",&ar.lenght);
	printf("What is the value you want to insert and what index you wanna insert\n");
	scanf("%d%d",&x,&y);
	function1(&ar);
	function2(&ar);
	display(ar);
	return 0;
}
