#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int n=7;
	int **ptr;///What is int *ptr ?It means that the variable ptr is pointing to something ,No what is **ptr means it means that ptr is pointing to something 
	printf(" The value %d",p);///and that something is also pointing to something .
	ptr=(int**)malloc(5*sizeof(int*));
	for(i=0;i<5;i++)
	{
		ptr[i]=&n;
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",ptr[i]);
	}
	return 0;
}

