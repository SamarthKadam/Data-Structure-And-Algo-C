/*Another way of doing the same things*/
#include<stdio.h>
#include<iostream>
using namespace std;
class arthmatic{
	private:
	int  a;
	int  b;
	public:
	arthmatic(int a, int b);
	int add();
	int  sub();

		};
	arthmatic::arthmatic(int a, int b)
		{
			this->a=a;
			this->b=b;
		}
	int arthmatic::add()
		{
			return a+b;
		}
	int arthmatic::sub()
		{
			return a-b;
		}
int main()
{
	arthmatic r(10,34);
	cout<<"ADD is "<<r.add()<<endl;
	cout<<"Sub is "<<r.sub()<<endl;
	return 0;
}
