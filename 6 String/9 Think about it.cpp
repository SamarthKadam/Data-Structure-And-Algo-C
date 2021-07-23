#include<stdio.h>//
int main()
{
	int in=0;
	int count=0;
	int size;
	int i;
	int j;
	char arr[20];
	gets(arr);
	for(i=0;arr[i]!='\0';i++)
	{}
	size=i;
	for(i=0;i<size-1;i++)
	{
		count=0;
		for(j=i+1;j<size;j++)
		{
			if(arr[i]!=1)
			{
			if(arr[i]==arr[j])
			{
				count=count+1;
				arr[j]=1;
			}
			}
		}
		if(count>=1)
		{
		printf("The %c is appearing %d times",arr[i],count);
		}
			
	}
	return 0;
}
