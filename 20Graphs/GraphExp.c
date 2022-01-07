#include<stdio.h>
#include<stdlib.h>
#define I 3272
int arr[50][50]={
{I,I,I,I,I,I,I,I},
{I,I,25,I,I,I,5,I},
{I,25,I,12,I,I,I,10},
{I,I,12,I,8,I,I,I},
{I,I,I,8,I,16,I,14},
{I,I,I,I,16,I,20,18},
{I,5,I,I,I,20,I,I},
{I,I,10,I,14,18,I,I}
};
int near[10]={I,I,I,I,I,I,I,I};
int Pathlenght=0;
struct Node {
	int from;
	int to;
};
struct Node *ptr=NULL;
void create()
{
	 ptr=(struct Node*)calloc(6,sizeof(struct Node));
}
int findMin()
{
	int i;
	int min=3272;
	int value;
	for(i=1;i<8;i++)
	{
		if(near[i]!=0)
		{
			if(arr[i][near[i]]<min)
			{
				min=arr[i][near[i]];
				value=i;
			}
		}
	}
	return value;
}
void PrimsAlgo()
{
	int getit;
	int min=3272;
	int Fi;
	int Fj;
	int i;
	int j;
	for(i=1;i<8;i++)
	{
		for(j=i;j<8;j++)
		{
			if(min>arr[i][j])
			{
				min=arr[i][j];
				Fi=i;
				Fj=j;
			}
			
		}
	}
	ptr[Pathlenght].from=Fi;
	ptr[Pathlenght].to=Fj;
	Pathlenght++;
	near[Fi]=0;
	near[Fj]=0;
	for(i=1;i<8;i++)
	{
		if(near[i]!=0)
		{
			if(arr[i][Fi]<arr[i][Fj])
			{
				near[i]=Fi;
			}
			else{
				near[i]=Fj;
			}
		}
	}
	while(Pathlenght<6)
	{
		getit=findMin();
		near[getit]=0;
		ptr[Pathlenght].from=ptr[Pathlenght-1].to;
		ptr[Pathlenght].to=getit;
		Pathlenght++;
		
		for(i=1;i<8;i++)
		{
			if(near[i]!=0)
			{
				if(arr[i][getit]<arr[i][near[i]])
				{
					near[i]=getit;
				}
				else{
					near[i]=getit;
				}
			}
		}
		
	}
	
	
}
void Path()
{
	int i;
	for(i=0;i<6;i++)
	{
		printf("%d->%d\n",ptr[i].from,ptr[i].to);
	}
}
int main()
{
	create();
	PrimsAlgo();
	Path();
	return 0;
	
}
