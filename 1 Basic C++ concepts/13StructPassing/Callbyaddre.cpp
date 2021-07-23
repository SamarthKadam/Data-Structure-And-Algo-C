#include<stdio.h>
struct rectangle{
	int lenght;
	int breadth;
};
int fun(struct rectangle *ptr)
{
	int fi;
	fi=(*ptr).lenght*(*ptr).breadth;
	return fi;
}
int main()
{
	int value;
	struct rectangle r={12,3};
	value=fun(&r);
	printf("%d",value);
	
	
	return 0;
}

