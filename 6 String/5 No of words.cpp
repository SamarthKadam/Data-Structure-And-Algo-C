#include<stdio.h>
int main()
{
	int i;
	int vcount=0;
	char arr[50];
	gets(arr);
	for(i=0;arr[i]!='\0';i++)
	{
		if((arr[i]==' ')&&(arr[i-1]!=' '))
		{
			vcount=vcount+1;
		}
	}
	
	printf("Your no of gaps are %d",vcount+1);
	return 0;
}
