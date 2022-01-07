#include<stdio.h>
#include<stdlib.h>
struct Node{
	int from;
	int to;
};
struct Node *str=NULL;
int lenght=0;
int arr[15][15]={{1,1,2,2,3,4,4,5,5},
                {2,6,3,7,4,5,7,6,7},
                {25,5,12,10,8,16,14,20,18}};
int m=9;
int n=3;
int included[10]={0,0,0,0,0,0,0,0,0,0};
int set[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
void create()
{
	str=(struct Node*)malloc(6*sizeof(struct Node));
}
void Union(int u, int v){
	
	while(set[u]>0)
	{
		u=set[u];
	}
	while(set[v]>0)
	{
		v=set[v];
	}
	
	
    if (set[u] < set[v]){
        set[u] += set[v];
        set[v] = u;
    } else {
        set[v] += set[u];
        set[u] = v;
    }
}
int Find(int u){
    int x = u;
    while (set[x] > 0){
        x = set[x];
    }
    return x; 
}
void Kruskals()
{
	int min;
	int x;
	int y;
	int iteration=0;
	int i;
	while(lenght<=5)
	{
		min=3127;
	for(i=0;i<m;i++)
	{
		if(included[i]==0&&arr[2][i]<min)
		{
			min=arr[2][i];
			x=arr[0][i];
			y=arr[1][i];
			iteration=i;
		}
	}
	if(Find(x)==Find(y))
	{
		included[iteration]=iteration;
	}
	else{
	str[lenght].from=x;
	str[lenght].to=y;
	lenght++;
	included[iteration]=1;
	Union(x,y);
     }
}
}
void Trace()
{
	int i;
	for(i=0;i<6;i++)
	{
		printf("%d->%d\n",str[i].from,str[i].to);
	}
}
int main()
{
create();
Kruskals();
Trace();
return 0;
}
