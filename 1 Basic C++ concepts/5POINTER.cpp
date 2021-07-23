/*#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int i;
	int a[5]={1,4,5,3,5};
	int *ptr;
	ptr=a;
	for(i=0;i<5;i++)
	{
		cout<<*(ptr+i)<<endl;
	}
	cout<<endl;
	for(i=0;i<5;i++)
	{
		cout<<ptr[i]<<endl;
	}
	return 0;
}*/
#include<stdio.h>
int main()
{
	int i;
	int a[23]={1,3,4,5,6,3,5,3};
	int *ptr;
	ptr=a;
	printf("This is using *(ptr+i)\n");
	for(i=0;i<8;i++)
	{
		printf("%d",*(ptr+i));
	}
	printf("\n");
	printf("This is using ptr[i]\n");
	for(i=0;i<8;i++)
	{
		printf("%d",ptr[i]);
	}
	return 0;
}
