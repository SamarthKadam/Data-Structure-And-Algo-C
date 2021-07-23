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
		A[n*(j-1)-(j-2)*(j-1)/2+i-j]=x;
	}
}
int Matrix::get(int i,int j)
{
	if(i>=j)
	{
		return A[n*(j-1)-(j-2)*(j-1)/2+i-j];
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
				cout<<A[n*(j-1)-(j-2)*(j-1)/2+i-j];
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
