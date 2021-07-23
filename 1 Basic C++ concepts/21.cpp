#include<stdio.h>
#include<iostream>
using namespace std;
class student{
	private:
	int rollno;
	int  marks;
	
	
	public:
		void fun(int x,int y)
		{
			rollno=x;
			marks=y;
		}
		int area()
		{
			return rollno*marks;
		}
};
int main()
{
	int value;
	class student s;
	class student *ptr=&s;
	(*ptr).fun(6,4);
	value=(*ptr).area();
	printf("%d",value);
	return 0;
}
