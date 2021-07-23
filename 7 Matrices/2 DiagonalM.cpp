#include<stdio.h>
struct Matrix{
	int arr[10];///Or you can initilize a pointer like you can dynamically allocate memory
	int n;
};
void set(struct Matrix *ptr,int i,int j,int x)
{
	if(i==j)
	{
		(*ptr).arr[i-1]=x;
	}
}
int get(struct Matrix m,int i,int j)
{
	if(i==j)
	{
		return m.arr[i-1];
	}
	else{
		return 0;
	}
}
void display(struct Matrix m)
{
	int i;
	int j;
	for(i=0;i<m.n;i++)
	{
		for(j=0;j<m.n;j++)
		{
			if(i==j)
			{
				printf("%d",m.arr[i]);
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
	struct Matrix m;
	m.n=4;
	set(&m,1,1,5);
	set(&m,2,2,8);
	set(&m,3,3,9);
	set(&m,4,4,2);
	display(m);
	printf(" Get element is %d",get(m,2,2));
	return 0;
	
}
