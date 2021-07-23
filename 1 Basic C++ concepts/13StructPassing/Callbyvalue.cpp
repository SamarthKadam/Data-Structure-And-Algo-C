#include<stdio.h>//This is first program is call by value
struct rectangle{
	int lenght;
	int breadth;
};
int fun(struct rectangle s)
{
	return s.breadth*s.lenght;
}
int main()
{
	int value;
	struct rectangle r={22,33};
	value=fun(r);
	printf("%d",value);
	
	
	return 0;
}

