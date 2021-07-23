#include<stdio.h>
int main()
{
	int q;
	int i;
	char ar[]={"WELCOME"};
	for(i=0;ar[i]!='\0';i++)
	{
		q=ar[i]+32;
		printf("%c",q);
	}
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	char arr[]="Hello world";
///	for(i=0;i<arr[i]!='\0';i++)
//	{
//	}
//	printf("%d",i);
//}
