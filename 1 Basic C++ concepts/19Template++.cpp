#include<stdio.h>
#include<iostream>
using namespace std;//Call by value will not change the value of its initial, and the call by address will change its value as a whole
template<class T>
class rectangle{
	private:
	T lenght;
	T breadth;
	public:
		rectangle(T n,T q);
		T area();
		};
		
		template<class T>
rectangle<T>::rectangle(T n, T q)
{
    T lenght=n;
	T breadth=q;
}
template<class T>
T rectangle::area()
{
	return lenght*breadth;
}
int main()
{
	T value;
 rectangle <float>r(4.5,5.5);//This is a constructer which initliases the value of the given variable
	value= r.area();
	cout<<value<<endl;
	return 0;
}
