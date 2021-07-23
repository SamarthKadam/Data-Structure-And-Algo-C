#include<stdio.h>
int main()
{
	int i;
	char arr[]="decimal";///anagrams are the words which have same lenght and both words are same in both the cases
	char arr1[]="medical";
	int h[26]={0};
	for(i=0;arr[i]!='\0';i++)
	{
		h[arr[i]-97]++;
	}
	for(i=0;arr1[i]!='\0';i++)
	{
		h[arr1[i]-97]--;
		if(h[arr1[i]-97]<0)
		{
			printf("Both the words are not anagram");
			break;
		}
	}
	if(arr1[i]=='\0')
	{
		printf("Both the wordsa are anagram");
	}
	return 0;
}
