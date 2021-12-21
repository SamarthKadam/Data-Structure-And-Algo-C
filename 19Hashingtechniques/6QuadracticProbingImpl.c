#include<stdio.h>
int hashtable[10];
void Hashing(int *ptr)
{
	int i=0;
	int location;
	location=(*ptr)%10;
	if(hashtable[location]==-1)
	{
		hashtable[location]=*ptr;
	}
	else{
		while(hashtable[(location+i*i)%10]!=-1)
		{
			i++;
		}
		hashtable[(location+i*i)%10]=(*ptr);
	}
}
int LinearProbing(int arr[100],int n)
{
	int i;
	for(i=0;i<10;i++)
	{
		hashtable[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		Hashing(&arr[i]);
	}
}
int Search(int search)
{
	int i=0;
	int location=search%10;
	while(hashtable[(location+i)%10]!=-1)
	{
		if(hashtable[(location+i)%10]==search)
		{
			printf("Element found at position %d",(location+i)%10);
			return 0;
		}
		i++;
	}
	printf("Fucking Element not found\n");
	return 0;
}
int main()
{
	int n;
	int arr[100];
	int search;
	printf("Enter the size of the elements\n");
	scanf("%d",&n);
	int i;
	printf("Enter the elememnts one by one\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	LinearProbing(arr,n);
	printf("Enter the element you wanna search\n");
	scanf("%d",&search);
	Search(search);
	return 0;
}
