#include<stdio.h>
#include<stdlib.h>
struct rectangle
{
	int lenght;
	int breadth;
};
int main()
{
	struct rectangle *ptr;
	ptr=(struct rectangle*)malloc(sizeof(struct rectangle));
	(*ptr).lenght=77;
	(*ptr).breadth=28;
	printf("%d \t %d",(*ptr).lenght,(*ptr).breadth);
	return 0;
}
