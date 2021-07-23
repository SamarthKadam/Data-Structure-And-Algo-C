#include<stdio.h>
#include<iostream>
using namespace std;
class rectangle
{
	private:
	int lenght;
	int breadth;
	public:
		
		void inti(int lenght,int breadth);
		int area();
		void increase();
	};
	void rectangle::inti(int lenght,int breadth)
	{
		this->lenght=lenght;
		this->breadth=breadth;
	}
	int  rectangle::area()
	{
		return lenght*breadth;
	}
	void rectangle::increase()
	{
		lenght=lenght*2;
		breadth=breadth*2;
	}
int main()
{
	int kadu;
	int value;
	int lenght;
	int breadth;
	printf("Enter the lenght of breadth");
	scanf("%d%d",&lenght,&breadth);
	rectangle r;
	r.inti(lenght,breadth);
	value=r.area();
	printf(" The value of it is %d",value);
	r.increase();
	kadu=r.area();
	printf(" The value after increasing %d",kadu);
	return 0;
}
