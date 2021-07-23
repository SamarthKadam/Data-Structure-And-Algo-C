#include<stdio.h>
#include<stdlib.h>//PARTIAL WAY OF ACCESSING MEMORY OF HEAP OF 2D ARRAY	
int main()
{
	int i;
	int j;
	int *A[3];//We have declared 3 array of pointers which are stored in stack
	A[0]=(int*)malloc(4*sizeof(int));///Below these are accesed from heap
	A[1]=(int*)malloc(4*sizeof(int));
	A[2]=(int*)malloc(4*sizeof(int));
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d",A[i][j]);
		}
	}
	return 0;
}
