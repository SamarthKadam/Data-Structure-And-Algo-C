#include<stdio.h>
int main()
{
	int i;
	char arr[50]="finding";
	int h=0;
	int x=0;
	for(i=0;arr[i]!='\0';i++)
	{
		x=1;
		x=x<<arr[i]-97;
		if(x&h>0)
		{
			printf("%c is a dupliate",arr[i]);
		}
		else{
			h=x|h;
		}
	}
}
