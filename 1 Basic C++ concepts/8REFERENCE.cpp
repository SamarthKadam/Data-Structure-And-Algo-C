#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a=7;
	int &r=a;///This is called reference varialble where 1 variable name has a and r,This statement means that a should be also known as r
	cout<<r<<endl;
	cout<<a<<endl;
	return 0;
}

