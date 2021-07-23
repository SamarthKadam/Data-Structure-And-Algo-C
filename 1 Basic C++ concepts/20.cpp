#include<stdio.h>
#include<iostream>
using namespace std;
class rectangle{
	private:
	int lenght;
	int breadth;
	public:
		rectangle(int a,int b);
		int area();
		void deduce();
};
	
	
	rectangle::rectangle(int a,int b)
		{
			lenght=a;
			breadth=b;
		}
		int rectangle::area()
		{
			return lenght*breadth;
		}
		void rectangle::deduce()
		{
			lenght=lenght/2;
			breadth=breadth/2;
		}
	
int main()
{
	int value;
	rectangle r(2,4);
	value=r.area();
	printf("%d\n",value);
	r.deduce();
	value=r.area();
	printf("%d\n",value);
	return 0;
}
