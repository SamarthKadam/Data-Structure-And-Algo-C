#include<stdio.h>
#include<stdlib.h>
struct Queu{
int size;
int front;
int *Q;
};
void create(struct Queu *ptr)
{
ptr->Q=(int*)malloc(ptr->size*sizeof(int));
ptr->front=-1;
}
void enqueu(struct Queu *ptr,int x)
{
int d=ptr->front;
while(d>=0 && ptr->Q[d]<x)
{
ptr->Q[d+1]=ptr->Q[d];
d--;
}
ptr->Q[d+1]=x;
ptr->front++;
}
int dequeu(struct Queu *ptr)
{
int x=-1;
if(ptr->front==-1)
{
return x;
}
x=ptr->Q[ptr->front];
ptr->front=ptr->front-1;
return x;
}
int main()
{
struct Queu q;
printf("Enter the size of queue\n");
scanf("%d",&q.size);
create(&q);
enqueu(&q,5);
enqueu(&q,4);
enqueu(&q,12);
enqueu(&q,1);
printf("\n");
// display(q);
printf("%d is the first element that will come outside\n",dequeu(&q));
printf("%d is the first element that will come outside\n",dequeu(&q));
printf("%d is the first element that will come outside\n",dequeu(&q));
return 0;
}
