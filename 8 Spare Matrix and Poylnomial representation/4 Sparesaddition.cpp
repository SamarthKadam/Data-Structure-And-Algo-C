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
	int num;
	struct Element *e;
};
void create(struct Sparse *ptr)
{
	int i;
	printf("Enter the dimension of 1st array\n");
	scanf("%d%d",&(*ptr).m,&(*ptr).n);
	printf("Enter the number of non zero row\n");
	scanf("%d",&(*ptr).num);
	(*ptr).e=(struct Element*)malloc((*ptr).num*sizeof(struct Element));
	printf("Enter the non zero element continuosly\n");
	for(i=0;i<(*ptr).num;i++)
	{
		scanf("%d%d%d",&(*ptr).e[i].i,&(*ptr).e[i].j,&(*ptr).e[i].x);
	}
	
}
struct Sparse* add(struct Sparse *s1,struct Sparse *s2)
{
	struct Sparse *sum;
	int i=0,k=0,j=0;
	if((*s1).m!=(*s2).m && (*s1).n!=(*s2).n)
	{
		printf("Addition is not possilbe\n");
		return NULL;
	}
	
	sum=(struct Sparse*)malloc(sizeof(struct Sparse));
	(*sum).e=(struct Element*)malloc(((*s1).num+(*s2).num)*sizeof(struct Element));
	
	while(i<s1->num&&i<s2->num)
	{
		 if(s1->e[i].i<s2->e[j].i)
		 {
		 	sum->e[k]=s1->e[i];
		 	k++;
		 	i++;
		 }
		 else if(s1->e[i].i>s2->e[j].i)
		 {
		 	sum->e[k]=s2->e[j];
		 	k++;
		 	j++;
		 }
		 else{
		 	if(s1->e[i].j<s2->e[j].j)
		 	{
		 		sum->e[k]=s1->e[i];
		 		k++;
		 		i++;
		    }
		    else if(s1->e[i].j>s2->e[j].j)
		    {
		    	
		    	sum->e[k]=s2->e[j];
		    	k++;
		    	j++;
			}
			else{
				
				sum->e[k]=s1->e[i];
				sum->e[k].x = sum->e[k].x+s2->e[j].x;
				k++;
				j++;
				i++;
			}
		 	
		 }
			 
	}
	for(;i<s1->num;i++)
	{
		sum->e[k]=s1->e[i];
		k++;
	}
	for(;j<s2->num;j++)
	{
		sum->e[k]=s2->e[j];
		k++;
	}
	sum->m=s1->m;
    sum->n=s1->n;
    sum->num=k;
    return sum;
}
void display(struct Sparse *ptr)
{
	int i;
	int j;
	int k=0;
	for(i=0;i<(*ptr).m;i++)
	{
		for(j=0;j<(*ptr).n;j++)
		{
			if(i==(*ptr).e[k].i&&j==(*ptr).e[k].j)
			{
				printf("%d",(*ptr).e[k].x);
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
	struct Sparse s1,s2;
	struct Sparse *sum;
	create(&s1);
	create(&s2);
	sum=add(&s1,&s2);
	display(sum);
	return  0;
}
