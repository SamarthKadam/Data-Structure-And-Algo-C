#include<stdio.h>
struct rectangle {
  int l;
  int b;
};
int main()
{
    struct rectangle r;///int r,int *ptr,ptr=&r
    r.l=51;
    r.b=71;
    struct rectangle *ptr=&r;
    printf("%d %d",(*ptr).l,(*ptr).b);
    return 0;
}