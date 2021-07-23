#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct Element{
	int coef;
	int exp;
};
struct Poly{
	int n;
	struct Element *ptr;
};
int main()
{
	int sum=0;
	int x;
	int i;
	struct Poly p;
	printf("What is the value of x\n");
	scanf("%d",&x);
	printf("Enter the size of your polynomial equation\n");
	scanf("%d",&p.n);
	p.ptr=(struct Element*)malloc((p.n)*sizeof(struct Element));
	printf("Enter the terms one by one\n");
	for(i=0;i<p.n;i++)
	{
		printf("Enter the %d term",i+1);
		scanf("%d",&p.ptr[i].coef);
		scanf("%d",&p.ptr[i].exp);
	}
	for(i=0;i<p.n;i++)
	{
		sum=sum+p.ptr[i].coef*pow(x,p.ptr[i].exp);
	}
	printf("%d",sum);
	return 0;
}
