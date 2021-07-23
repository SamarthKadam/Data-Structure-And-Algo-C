#include<stdio.h>//Here We allocatte array of pointer from heap completely
#include<stdlib.h>
int main()
{
	int i;
	int j;
	int m;
	int n;
	printf("Enter the no of rows\n");
	scanf("%d",&m);
	printf("Enter the no of colums\n");
	scanf("%d",&n);
	int **A;//Double pointer
	A=(int**)malloc(m*sizeof(int*)); //Array of pointer accesed from heap
	for(i=0;i<n;i++)
	{
		A[i]=(int*)malloc(n*sizeof(int*));
	}
	printf("Enter now\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\n",A[i][j]);
		}
	}
	return 0;
}
