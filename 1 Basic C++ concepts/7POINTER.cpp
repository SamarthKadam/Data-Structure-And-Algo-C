#include<stdio.h>
#include<iostream>
using namespace std;
struct p
{
	int lenght;
	int breadth;
	
};
int main()
{
	int *ptr=NULL;
	float *ptr1;
	char *ptr2;
    double *ptr3;
	struct p *ptr4;//We declared the pointer varialbe of that particular data type
	cout<<sizeof(ptr)<<endl;
	cout<<sizeof(ptr1)<<endl;
	cout<<sizeof(ptr2)<<endl;
	cout<<sizeof(ptr3)<<endl;
	cout<<sizeof(ptr4)<<endl;
	return 0;///The size of pointer is independent of data type,Every pointer takes same amount of memory,like in most of the cases it is 8 bytes

}

