#include<stdio.h> // There are two ways to reduce its time complexities. There are chances that user can pick that same number again so we can use 1>transposition
struct Array{    //Where we can swap the value to the left side till it reaches 0th index
	int arr[20]; //2>In move to head we can directly move key element to 0th index
	int lenght;
};
void fun1(struct Array *ptr)
{
	int i;
	for(i=0;i<(*ptr).lenght;i++)
	{
		scanf("%d",&(*ptr).arr[i]);
	}
}
int fun2(struct Array *ptr,int key)
{
	int i;
	for(i=0;i<(*ptr).lenght;i++)
	{
		if((*ptr).arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int answer;
	int i;
	int n;
	struct Array list;
	int key;
	printf("Enter the key you want to find\n");
	scanf("%d",&key);
	printf("Enter the size of your array\n");
	scanf("%d",&n);
	list.lenght=n;
	fun1(&list);
	answer=fun2(&list,key);
	printf("%d",answer);
	return 0;
	
	
}
