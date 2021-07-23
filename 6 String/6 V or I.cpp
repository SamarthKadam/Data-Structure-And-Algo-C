#include<stdio.h>
int function(char arr[50])
{
	int i;
	for(i=0;i<arr[i]!='\0';i++)
	{
		if(!(arr[i]>=65&&arr[i]<=90)&&!(arr[i]>=97&arr[i]<=122)&&!(arr[i]>=48&&arr[i]<=57))
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int answer;
	char arr[50];
	gets(arr);
	answer=function(arr);
	if(answer==1)
	{
		printf("Valid\n");
	}
	else
	{
		printf("Invalid\n");
	}
}
