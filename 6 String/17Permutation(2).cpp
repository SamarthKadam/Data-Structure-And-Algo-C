#include<stdio.h>
void Pf(char Res[10])
{
	puts(Res);
	
}
void perm(char s[10],int k)
{
	static int A[10]={0};
	static char Res[10];
	int i;
	if(s[k]=='\0')
	{
		Res[k]='\0';
		Pf(Res);
	}
	else{
		for(i=0;s[i]!='\0';i++)
		{
			if(A[i]==0)
			{
				Res[k]=s[i];
				A[i]=1;
				perm(s,k+1);
				A[i]=0;
			}
		}
	}
}
int main()
{
	int k=0;
	char s[10]="ABC";
	perm(s,k);
	return 0;
}
