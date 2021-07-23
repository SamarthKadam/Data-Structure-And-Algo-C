#include<stdio.h>
struct rectangle{
	int lenght;
	int breadth;
};
void initialize(struct rectangle *ptr,int n, int q)
{
	(*ptr).lenght=n;
	(*ptr).breadth=q;
}
int area(struct rectangle q)
{
	int s;
	s=q.lenght * q.breadth;
	return s;
}
void changelenght(struct rectangle *ptr,int l,int b)
{
	(*ptr).lenght=l;
	(*ptr).breadth=b;
	printf("%d\n",(*ptr).lenght*(*ptr).breadth);
	
}
int main()
{
	int value;
	struct rectangle r;
	initialize(&r,5,10);
	value=area(r);
	printf("%d\n",value);
	changelenght(&r,10,10);
	printf("%d      %d",r.lenght,r.breadth);
	return 0;
}
