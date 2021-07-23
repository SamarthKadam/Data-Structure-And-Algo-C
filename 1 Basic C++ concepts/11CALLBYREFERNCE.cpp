#include<stdio.h>
#include<iostream>//Above one we swap by call by referecne this can be done using only c++
using namespace std;//Whatever change we made only happens in formal paramater nothing changes in actul parameter
void function(int l,int n)
{
	int temp=n;
	n=l;
	l=temp;
	printf(" Inise function %d%d\n",l,n);
}
int main()
{
	int x=71;
	int y=22;
	function(x,y);
	cout<<x<<endl;
	cout<<y<<endl;
	return 0;
}
