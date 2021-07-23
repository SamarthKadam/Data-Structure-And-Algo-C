#include<stdio.h>
struct Array{
	int arr[20];
	int lenght;
};
int function(struct Array list,int key)
{
	int low=0;
	int high=list.lenght-1;
	int mid;
	while(low<=high)
	{
		mid=low+high;
		if(list.arr[mid]==key)
		{
			return mid;
		}
		else if(list.arr[mid]<key)
		{
			low=mid+1;
		}
		else if(list.arr[mid]>key)
	    {
	    	high=mid-1;
      	}
		
	}
	return -1;
		
}
int main()
{
	int i;
	int value;
	struct Array list;
	int key;
	printf("Enter the size of you array\n");
	scanf("%d",&list.lenght);
	printf("Enter the the key to be serached\n");
	scanf("%d",&key);
	printf("Enter numbers one by one\n");
	for(i=0;i<list.lenght;i++)
	{
		scanf("%d",&list.arr[i]);
	}
	value=function(list,key);
	printf("%d",value);
	return 0;	
}
