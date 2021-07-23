#include<stdio.h>
#include<stdlib.h>
struct Matrix{
	int *A;
	int n;
};
void set(struct Matrix *ptr,int i,int j,int x)
{
	if(i<=j)
	{
		(*ptr).A[j*(j-1)/2+i-1]=x;
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
			if(i<=j)
			{
				printf("%d",m.A[j*(j-1)/2+i-1]);
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
	int i;
	int x;
	int j;
	struct Matrix m;
	printf("Enter the size of your dimension\n");
	scanf("%d",&m.n);
	m.A=(int*)malloc(m.n*(sizeof(int)));
	printf("Enter the elements\n");
	for(i=1;i<=m.n;i++)
	{
		for(j=1;j<=m.n;j++)
		{
			scanf("%d",&x);
			set(&m,i,j,x);
		}
	}	
	
	display(m);
	free(m.A);
	return 0;
}
