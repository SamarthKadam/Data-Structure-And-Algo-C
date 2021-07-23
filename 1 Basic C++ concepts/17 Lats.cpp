#include<stdio.h>
#include<iostream>
using namespace std;//Call by value will not change the value of its initial, and the call by address will change its value as a whole
class rectangle{
	private:
	int lenght;
	int breadth;
	public:
 rectangle(int n, int q)
{
    lenght=n;
	breadth=q;
	printf("%d%d\n",lenght,breadth);
}
int area()
{
	return lenght*breadth;
}
~rectangle()///This is where the end of pointer should be declare if we allocate meomory using pointer
{
	printf("Destructor");//It is used to delloactate the space or memory after using, like free ptr.
}
};
int rectangle::area();
int main()
{
	int value;
 rectangle r(4,5);//This is a constructer which initliases the value of the given variable
	value= r.area();//Here we call the class function using . thing
	 printf("%d\n",value);
	 printf("%d",r.lenght);
	return 0;
}
