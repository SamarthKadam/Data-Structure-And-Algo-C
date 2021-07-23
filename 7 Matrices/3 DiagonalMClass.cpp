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
		A=new int[n];
    }
    
    ~Matrix()
    {
    	delete[]A;
	}
	
	void set(int i,int j,int x);
	int get(int i,int j);
	void display();
};

void Matrix::set(int i,int j,int x)
{
	if(i==j)
	{
		A[i-1]=x;
	}
}
int Matrix::get(int i,int j)
{
	if(i==j)
	{
		return A[i-1];
	}
	else
	return 0;
}
void Matrix::display()
{
	int i=0;
	int j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				cout<<A[i];
			}
			else
			cout<<"0";
		}
		cout<<endl;
	}
}
int main()
{
	class Matrix m(4);
	m.set(1,1,3);
	m.set(2,2,5);
	m.set(3,3,7);
	m.set(4,4,9);
	m.display();
	printf("%d",m.get(3,3));
	return 0;
}
