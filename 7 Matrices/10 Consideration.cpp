#include<stdio.h>
#include<stdlib.h>
struct Array {
	int *q;
	int lenght;
	int dim;
};
void create(struct Array *ptr)
{
	ptr->lenght=2*(ptr->dim)-1;
	ptr->q=(int*)malloc(ptr->lenght*sizeof(int));
}
void set (struct Array *ptr)
{
	int i,j,x;
	for(i=0;i<ptr->dim;i++)
	{
		for(j=0;j<ptr->dim;j++)
		{
			scanf("%d",&x);
			if(i<=j)
			{
				if(i==j)
				{
					ptr->q[i-j]=x;
				}
				else if(i<j)
				{
					ptr->q[j-i]=x;
				}
			}
			else{
				ptr->q[ptr->dim+i-j-1]=x;
			}
		}
	}
}
void get(struct Array *ptr)
{
	int i,j;
		for(i=0;i<ptr->dim;i++)
	{
		for(j=0;j<ptr->dim;j++)
		{
			if(i<=j)
			{
				if(i==j)
				{
					printf("%d\t",ptr->q[i-j]);
				}
				else if(i<j)
				{
					printf("%d\t",ptr->q[j-i]);
				}
			}
			else{
				printf("%d\t",ptr->q[ptr->dim+i-j-1]);
			}
		}
		printf("\n");
	}
}
int main()
{
   struct Array a;
  printf("Enter the dimesion of array\n");
  scanf("%d",&a.dim);
  create(&a);
  set(&a);
  get(&a);
  return 0;
}
