#include<stdio.h>
#include<stdlib.h>
struct Element{
	int i;
	int j;
	int x;
};
struct Sparse{
	int m;
	int n;
	int num;//total number of non zero rows
	struct Element *ele;
};
void create(struct Sparse *ptr)
{
	int i;
	printf("Enter the dimension(no of row and column)\n");
	scanf("%d%d",&(*ptr).m,&(*ptr).n);
	printf("Enter the number of non zero rows\n");
	scanf("%d",&(*ptr).num);
	(*ptr).ele=(struct Element*)malloc((*ptr).num*sizeof(int));
	for(i=0;i<(*ptr).num;i++)
	{
		scanf("%d%d%d",&(*ptr).ele[i].i,&(*ptr).ele[i].j,&(*ptr).ele[i].x);
	}	
}
void display(struct Sparse s)
{
	int i,j,k=0;
	for(i=0;i<s.m;i++)
	{
		for(j=0;j<s.n;j++)
		{
			if(i==s.ele[k].i  && j==s.ele[k].j)
			{
			printf("%d",s.ele[i].x);
			k++;
		    }
		    else{
		    	printf("0");
			}
		}
		printf("\n");
	}
}
int main()
{
	struct Sparse s;
	create(&s);
	display(s);
	free(s.ele);
	return 0;
}
