//#include<stdio.h> Comparing string
//int main()
//{
//	int i;
//	int j;
//	char a[20]="Painter";
//	char b[20]="Painting";
//	for(i=0,j=0;a[i]!='\0'&&b[i]!='\0';i++,j++)
//	{
//		if(a[i]!=b[j])
//		{
//			break;
//		}
//	}
//	if(a[i]==b[j])
//	{
//		printf("Both the strings are equal");
//	}
//	else if(a[i]<b[j])
///	{
//		printf("String b is greater");
//	}
//	else if(a[i]>b[j])
//	{
//		printf("string a is greater");
//	}
//	return 0;
///	
//}
#include<stdio.h>
int main()
{
	int size;
	int i;
	int j;
	char arr[20];
	char arr1[20];
	gets(arr);
	for(i=0;i<arr[i]!='\0';i++)
	{
	}
	i=i-1;
	size=i;
	for(i=i,j=0;i>=0;i--,j++)
	{
		arr1[j]=arr[i];
	}
	for(i=0,j=0;i<=size;i++,j++)
	{
		if(arr[i]!=arr1[j])
		{
			printf("Your entered string is not palindrome");
			return 0;

		}
	}
	printf("Your entered string is palindrome");
	return 0;
	
}
//#include<stdio.h>
//int main()
//{
//	char arr[10];
//	gets(arr);
//	int i;
///	int j;
//	for(i=0;i<arr[i]!='\0';i++)
//	{
//	}
//	for(i=0,j=i-1;i<j;i++,j--)
//	{
//		if(arr[i]!=arr[j])
//		{
//			printf("Your string is not equal");
//			return 0;
//		}
//	}
//	printf("Your string is equal");
//	return 0;
//}
