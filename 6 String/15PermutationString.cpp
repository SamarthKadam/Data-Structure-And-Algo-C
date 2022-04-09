#include<stdio.h>
void Pf(char s[10])
{
	puts(s);
}
void swap(char *a,char *b)
{
	char temp=*b;
	*b=*a;
	*a=temp;
}
void perm(char s[10],int l,int h)
{
	int i;
	if(l==h)
	{
		Pf(s);
	}
	else{
		for(i=l;i<=h;i++)
		{
			swap(&s[l],&s[i]);
			perm(s,l+1,h);
			swap(&s[l],&s[i]);
		}
	}
	
}
int main()
{
	char s[10]="ABC";
	perm(s,0,2);
	return 0;
}
