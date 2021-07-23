#include<stdio.h>
int main()
{
	int i;
	int vcount=0;
	int ccount=0;
	char arr[50];
	gets(arr);
	for(i=0;arr[i]!='\0';i++)
	{
		if((arr[i]=='a')||(arr[i]=='e')||(arr[i]=='i')||(arr[i]=='o')||(arr[i]=='u')||(arr[i]=='A')||(arr[i]=='E')||(arr[i]=='I')||(arr[i]=='O')||(arr[i]=='U'))
		{
			vcount=vcount+1;
		}
		else if((arr[i]>=65&&arr[i]<=90)||(arr[i]>=97 && arr[i]<=122))
		{
			ccount=ccount+1;
		}
	}
	printf("%d are vowels\n",vcount);
	printf("%d are consenents\n",ccount);
	return 0;
}
