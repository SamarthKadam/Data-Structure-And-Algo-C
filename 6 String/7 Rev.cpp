#include<stdio.h>//You swap from your method
int main()
{
	char arr1[51];
	char arr[50];
	int i;
	int j;
	gets(arr);
	for(i=0;arr[i]!='\0';i++)
	{
	}
	i=i-1;
	for(j=0;i>=0;i--,j++)
	{
		arr1[j]=arr[i];
	}
	arr1[j]='\0';
	puts(arr1);
	return 0;
}
