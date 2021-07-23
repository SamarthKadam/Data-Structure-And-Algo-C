#include<stdio.h>
#include<iostream>
using namespace std;
struct car{
	int seats=0;
	int price=0;
};
void fun(struct car* ptr,int seats, int price)
{
	(*ptr).price=price;
	(*ptr).seats=seats;
}
int function1(struct car* ptr,int seats, int price)
{
	return seats*price;
}
int main()
{
	int value;
	int seats;
	int price;
	scanf("%d",&seats);
	scanf("%d",&price);
	struct car ford;
	struct car *ptr=&ford;
	printf("%d %d\n",(*ptr).seats,(*ptr).price);
	fun(ptr,seats,price);
	printf("%d %d\n",(*ptr).seats,(*ptr).price);
	value=function1(ptr,seats,price);
	printf("%d\n",value);
	return 0;
}
