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
		if(i==j)
		{
			(*ptr).A[i-j]=x;
		}
		else if(j-i==1)
		{
				(*ptr).A[j-i]=x;
		}
		else if(j-i==2)
		{
			(*ptr).A[j-i]=x;
		}
		else if(j-i==3)
		{
			(*ptr).A[j-i]=x;
		}
		else if(j-i==4)
		{
			(*ptr).A[j-i]=x;
		}
	}
	else{
		
		if(i-j==1)
		{
			(*ptr).A[(*ptr).n+i-j-1]=x;
		}
		else if(i-j==2)
		{
			(*ptr).A[(*ptr).n+i-j-1]=x;
		}
		else if(i-j==3)
		{
			(*ptr).A[(*ptr).n+i-j-1]=x;
		}
		else if(i-j==4)
		{
			(*ptr).A[(*ptr).n+i-j-1]=x;
		}
			
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
				if(i==j)
		{
			printf("%d",m.A[i-j]);
		}
		else if(j-i==1)
		{
				printf("%d",m.A[j-i]);
		}
		else if(j-i==2)
		{
			printf("%d",m.A[j-i]);
		}
		else if(j-i==3)
		{
			printf("%d",m.A[j-i]);
		}
		else if(j-i==4)
		{
			printf("%d",m.A[j-i]);
		}
	}
	else{
		
		if(i-j==1)
		{
			printf("%d",m.A[m.n+i-j-1]);
		}
		else if(i-j==2)
		{
			printf("%d",m.A[m.n+i-j-1]);
		}
		else if(i-j==3)
		{
			printf("%d",m.A[m.n+i-j-1]);
		}
		else if(i-j==4)
		{
			printf("%d",m.A[m.n+i-j-1]);
		}
			
	}
			
		}
		printf("\n");
	}
}
int main()
{
	int i;
	int j;
	int x;
	struct Matrix m;
	printf("Enter the dimension\n");
	scanf("%d",&m.n);
	m.A=(int*)malloc(2*(m.n)-1*(sizeof(int)));
	printf("Now enter the elements\n");
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
