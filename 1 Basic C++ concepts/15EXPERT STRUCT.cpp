#include<stdio.h>
struct rectangle{
	int lenght;
	int breadth;
};
void in(struct rectangle *ptr,int l, int b)
{
//	(*ptr).lenght=l;
//	(*ptr).breadth=b;
this->lenght=l;
this->breadth=b;
}
int area(struct rectangle *ptr)
{
	return ((*ptr).lenght)*((*ptr).breadth);
}
int main()
{
	int value;
	int l;
	int b;
	printf("Enter the lenght and breadth");
	scanf("%d",&l);
	scanf("%d",&b);
	struct rectangle r;
	struct rectangle *ptr=&r;
	in(ptr,l,b);
	value=area(ptr);
	printf("%d",value);
	return 0;
}
