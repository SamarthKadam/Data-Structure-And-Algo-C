#include<stdio.h>
#include<iostream>
using namespace std;
class Matrix{
	
	private:
		int *A;
		int n;
		
	public:
	Matrix(int n)
	{
		this->n=n;
		A=new int[n*(n+1)/2];
    }
    
    ~Matrix()
    {
    	delete[]A;
	}
	
	void set(int i,int j,int x);
	int get(int i, int j);
	void display();
};

void Matrix::set(int i,int j,int x)
{
	if(i>=j)
	{
		A[i*(i-1)/2+j-1]=x;
	}
}
int Matrix::get(int i,int j)
{
	if(i>=j)
	{
		return A[i*(i-1)/2+j-1];
	}
	else
	return 0;
}
void Matrix::display()
{
	int i=0;
	int j=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i>=j)
			{
				cout<<A[i*(i-1)/2+j-1];
			}
			else
			cout<<"0";
		}
		cout<<endl;
	}
}
int main()
{
	int i,j;
	int d;
	printf("Enter the dimension\n");
	scanf("%d",&d);
	Matrix m(d);
	int x;
	printf("Enter the all elements\n");
	for(i=1;i<=d;i++)
	{
		for(j=1;j<=d;j++)
		{
			cin>>x;
			m.set(i,j,x);
		}
	}
	m.display();
	return 0;
}
