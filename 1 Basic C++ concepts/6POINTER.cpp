/*DYNAMIC MEMORY ALLOCATION USING C */
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	int i;
	int *ptr;
	scanf("%d",&n);
	ptr=new int[n];//////////////////////////////////////////////////////////////////////////////////////
	for(i=0;i<n;i++)
	{
		cin>>ptr[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<*(ptr+i)<<endl;
	}
	delete []ptr;//This is used to free the pointer 
	return 0;
}




/*{
	int i;
	int *ptr;
	ptr=(int*)malloc(5*sizeof(int));
	for(i=0;i<5;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d",*(ptr+i));
	}
	free(ptr);
	return 0;
}
*/

