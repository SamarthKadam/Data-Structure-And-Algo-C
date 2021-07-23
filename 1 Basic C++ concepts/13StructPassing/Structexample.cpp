#include<stdio.h>
#include<stdlib.h>
struct rectangle{
	int lenght;
	int breadth;
};
struct rectangle *fun()
{
	struct rectangle *p;
	p=(struct rectangle*)malloc(sizeof(struct rectangle));
	(*p).lenght=17;
	(*p).breadth=22;
	printf("%d",(*p).lenght);
	printf("%d",(*p).breadth);
	return p;
}
int main()
{
	struct rectangle *ptr=fun();
	return 0;
}
