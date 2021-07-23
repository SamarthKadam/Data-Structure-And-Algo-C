#include<stdio.h>
#include<stdlib.h>
struct Matrix{
	int *A;
	int n;
};
void set(struct Matrix *ptr,int i,int j,int x)
{
	if(i>=j)
	{
		(*ptr).A[i*(i-1)/2+j-1]=x;
	}
}

void get(struct Matrix m,int i, int j)
{
	int temp;
		if(i>=j)
	{
		printf("%d",m.A[i*(i-1)/2+j-1]);
	}
	else{
		temp=i;
		i=j;
		j=temp;
		printf("%d",m.A[i*(i-1)/2+j-1]);
	}
		
}
int main()
{
	int x;
	int i;
	int j;
	struct Matrix m;
	printf("Enter the dimension \n");
	scanf("%d",&m.n);
	m.A=(int*)malloc(m.n*(m.n+1)/2*(sizeof(int)));
	printf("Enter the elements\n");
	for(i=1;i<=m.n;i++)
	{
		for(j=1;j<=m.n;j++)
		{
		scanf("%d",&x);
		set(&m,i,j,x);	
		}
	}
	
	get(m,1,3);
	free(m.A);
	return 0;
	
}
