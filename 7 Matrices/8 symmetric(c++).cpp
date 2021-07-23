#include<stdio.h>
#include<iostream>
using namespace std;
class Matrix{
	private:
	int *A;
	int n;
	
	public:
		void set(int i, int j,int x);
		void get(int i, int j);
		
		
		Matrix(int d)
		{
			n=d;
			A=new int[n*(n+1)/2];
		}
		~Matrix()
		{
			delete []A;
		}
		
};
void Matrix:: set(int i,int j,int x)
{
	if(i>=j)
	{
		A[i*(i-1)/2+j-1]=x;
	}
}

void Matrix:: get(int i, int j)
{
	int temp;
		if(i>=j)
	{
		printf("%d",A[i*(i-1)/2+j-1]);
	}
	else{
		temp=i;
		i=j;
		j=temp;
		printf("%d",A[i*(i-1)/2+j-1]);
	}
		
}
int main()
{
	int i;
	int j;
	int d;
	int x;
	printf("Enter the dimension of your array\n");
	scanf("%d",&d);
	Matrix m(d);
	printf("Enter the all elements\n");
	for(i=1;i<=d;i++)
	{
		for(j=1;j<=d;j++)
		{
			scanf("%d",&x);
			m.set(i,j,x);
		}
	}
	m.get(2,3);
	return 0;
	
}
