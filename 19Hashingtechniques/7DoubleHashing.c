#include<stdio.h>
int hashtable[10];
int hash1(int x)
{
	return x%10;
}
int hash2(int x)
{
	return (7-(x%7));
}
void Hashing(int *ptr)
{
	int i=0;
	int location;
	while(hashtable[(hash1(*ptr)+i*hash2(*ptr))%10]!=-1)
	{
		i++;
	}
	hashtable[(hash1(*ptr)+i*hash2(*ptr))%10]=*ptr;
}
int DoubleHashing(int  arr[100],int n)
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
int Search(int x)
{
	int i=0;
	int answer=x;
	while(hashtable[(hash1(x)+i*hash2(x))%10]!=-1)
	{
		if(hashtable[(hash1(x)+i*hash2(x))%10]==answer)
		{
			printf("Element found at %d position",(hash1(x)+i*hash2(x))%10);
			return 0;
		}
		i++;
	}
	printf("Element Not found\n");
	return 0;
	
}
int main()
{
	int n;
	int i;
	int search;
	int arr[100];
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the element you wanna search\n");
	scanf("%d",&search);
	printf("Enter the elements one by one\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	DoubleHashing(arr,n);
	Search(search);
	return 0;
}
