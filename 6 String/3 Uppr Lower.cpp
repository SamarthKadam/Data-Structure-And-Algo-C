#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char arr[50];
	bool q;
	printf("User do you want it in upper case then enter 1 ,If you want the string in lower case then enter 0\n");
	scanf("%d",&q);
	getchar();
	printf("Enter the string\n");
	gets(arr);
	if(q==1)
	{
		for(i=0;i<strlen(arr);i++)
		{
			if(arr[i]>96)
			{
		 arr[i]=arr[i]-32;

		 }
		}
	}
	else{
		for(i=0;i<strlen(arr);i++)
		{
			if(arr[i]<91)
			{
			arr[i]=arr[i]+32;
		}
		}
	}
	puts(arr);
}
