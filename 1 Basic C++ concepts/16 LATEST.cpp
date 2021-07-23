#include<stdio.h>//Call by value will not change the value of its initial, and the call by address will change its value as a whole
struct student{
	int lenght;
	int breadth;
};
void function(struct student *ptr,int n, int q)
{
	(*ptr).lenght=n;
	(*ptr).breadth=q;
	printf("%d%d\n",(*ptr).lenght,(*ptr).breadth);
}
int main()
{
	struct student r;
	function(&r,3,4);
	printf("%d%d\n",r.lenght,r.breadth);
	return 0;
}
