#include<stdio.h>
#include<stdlib.h>
struct Matrix{
	int *A;
	int n;
	
};
void set(struct Matrix *ptr,int i, int j, int x)
{
	if(i>=j)
	{
		(*ptr).A[i*(i-1)/2+j-1]=x;
	}
}
int get(struct Matrix m,int i,int j)
{
	if(i>=j)
	{
		return m.A[i*(i-1)/2+j-1];
	}
	else 
	{
	return 0;
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
			if(i>=j)
			{
				printf("%d",m.A[i*(i-1)/2+j-1]);
			}
			else{
				printf("0");
			}
		}
		printf("\n");
	}
	
}
int main()
{
	int i,j,x;
	struct Matrix m;
	printf("What is the dimension of the array\n");
	scanf("%d",&m.n);
	m.A=(int *)malloc(m.n*(m.n+1)/2*sizeof(int));
	printf("Enter the all elements\n");
	for(i=1;i<=m.n;i++)
	{
		for(j=1;j<=m.n;j++)
		{
			scanf("%d",&x);
			set(&m,i,j,x);
		}
	}
	
	
	printf("\n");
	display(m);
	free(m.A);
	return 0;
	}
