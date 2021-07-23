#include<stdio.h>
#include<stdlib.h>
struct rectangle{
	int lenght;
	int breadth;
};
struct rectangle* fun()
{
	struct rectangle *ptr;
	ptr=(struct rectangle *)malloc(sizeof(struct rectangle));
	return ptr;
}
int function(struct rectangle *ptr)
{
return (*ptr).lenght * (*ptr).breadth;	
}
int main()
{
	int value;
	struct rectangle *ptr=fun();
	(*ptr).lenght=7;
	(*ptr).breadth=73;
	value=function(ptr);
	printf("%d",value);
	return 0;
}
