#include<stdio.h>
#include<stdlib.h>
struct Matrix{
	int *A;
	int n;
};
void set(struct Matrix *ptr,int i,int j,int x)
{
	if(i-j==1)
	{
		(*ptr).A[i-2]=x;
	}
	else if(i-j==0)
	{
		(*ptr).A[(*ptr).n-1+i-1]=x;
	}
	else if(j-i==1)
	{
		(*ptr).A[2*(*ptr).n-1+i-1]=x;
	}
}
void display(struct Matrix m)
{
	int i;
	int j;
	for(i=1;i<=m.n;i++)
	{
		for(j=1;j<=m.n;j++)
		{
				if(i-j==1)
	{
		printf("%d",m.A[i-1]);
	}
	else if(i-j==0)
	{
		printf("%d",m.A[m.n-1+i-1]);
	}
	else if(j-i==1)
	{
		printf("%d",m.A[2*(m.n)-1+i-1]);
	}
	else
	{
		printf("0");
	}
	}
	printf("\n");
	}
	
}
int main()
{
	int x;
	int i;
	int j;
	struct Matrix m;
	printf("enter the size of your dimension\n");
	scanf("%d",&m.n);
	m.A=(int*)malloc((3*(m.n)-2)*sizeof(int));
	for(i=1;i<=m.n;i++)
	{
		for(j=1;j<=m.n;j++)
		{
				scanf("%d",&x);
				set(&m,i,j,x);
			
			
		}
	}
	display(m);
	return 0;
}
