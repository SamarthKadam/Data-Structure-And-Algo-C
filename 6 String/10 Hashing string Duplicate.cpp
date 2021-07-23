#include<stdio.h>//You can only find duplicate of smaler case letter
int main()
{
	int n;
	char arr[30];
	int i;
	int H[50];
	gets(arr);
	n=26;
	for(i=0;i<n;i++)
	{
		H[i]=0;
	}
	for(i=0;arr[i]!='\0';i++)
	{
		H[arr[i]-97]++;
		
	}
	for(i=0;i<n;i++)
	{
		if(H[i]>1)
		{
			printf("Element %c is repeating %d times",i+97,H[i]);
		}
	}
	return 0;
}
