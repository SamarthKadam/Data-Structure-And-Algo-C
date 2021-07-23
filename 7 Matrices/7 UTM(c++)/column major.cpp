#include<stdio.h>
#include<iostream>
using namespace std;
class Matrix{
	private:
	int *A;
	int n;
	
	public:
		Matrix(int d)
		{
			n=d;
			A=new int[n*(n+1)/2];
		}
		~Matrix()
		{
			delete []A;
		}
		void set(int i,int j,int k);
		void display();
	
};
void Matrix::set(int i,int j,int x)
{
	if(i<=j)
	{
		A[j*(j-1)/2+i-1]=x;
	}
}
void Matrix::display()
{
	int i;
	int j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
	if(i<=j)
	{
		printf("%d",A[j*(j-1)/2+i-1]);
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
	int j;
	int d;
	int x;
	printf("Enter the dimension\n");
	scanf("%d",&d);
	Matrix m(d);
	printf("Enter the elements one bye one\n");
	for(i=1;i<=d;i++)
	{
		for(j=1;j<=d;j++)
		{
			scanf("%d",&x);
			m.set(i,j,x);
		}
	}
	m.display();
	return 0;
	
	
}
