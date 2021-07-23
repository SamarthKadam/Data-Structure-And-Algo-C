/*Object and classes*/
#include<stdio.h>
#include<iostream>
using namespace std;
class rectangle{
	private:
	int lenght;
	int breadth;
public:
rectangle(int l,int b)///This is called constructer or initilizer,It does a job of initliziig the object,give the class name and initilize it,This rectangle is having same name of classs that is rectanlge
{
	lenght=l;
	breadth=b;
}
int area()
{
	int h;
	h=lenght*breadth;
	return h;
}
int perimeter()
{
	int j;
	j=2*(lenght*breadth);
	return j;
}
};
int main()
{
	int result;
	int peri;
	int l;
	int b;
	printf("Enter the lenght and breadth");
	scanf("%d",&l);
	scanf("%d",&b);
	rectangle r(l,b);//struct rectangle r=====rectangle r///We can call this ojbect//You can call all the function using . operater,,You can have direct initlization as rectangle r(10,5); instead of calling a function,it .Object is created and automatically the functio is called
	result=r.area();
	peri=r.perimeter();
	printf("%d",result);
	printf("%d",peri);
	return 0;
}
