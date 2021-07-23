#include<stdio.h>
#include<stdlib.h>//Increasing the size of array accessed from heap , static array size cannot be increased
int main()
{
	int i;
	int m;
	int n;
	int *p;
	int *q;
	printf("Enter the first size of your aray\n");
	scanf("%d",&m);
	p=(int*)malloc(m*sizeof(int));
	for(i=0;i<m;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("Now you want to resize the array\n");
	scanf("%d",&n);
	q=(int*)malloc(n*sizeof(int));
	for(i=0;i<m;i++)
	{
		q[i]=p[i];
	}
	free(p);
	p=NULL;
	p=q;
	free(q);
	q=NULL;
	for(i=0;i<n;i++)
	{
		printf("%d\n",p[i]);
	}
	return 0;
}
