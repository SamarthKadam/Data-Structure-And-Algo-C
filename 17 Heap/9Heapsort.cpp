#include<stdio.h>
int n;
void swap(int *ptr1,int *ptr2)
{
	int temp;
	temp=*(ptr1);
	*ptr1=*(ptr2);
	*ptr2=temp;
}
void Delete(int arr[100])
{
	int i,j;
	int x=arr[1];
	arr[1]=arr[n];
	arr[n]=x;
	i=1;
	j=2*i;
	while(j<=n-1)
	{
		if(j+1<=n&&arr[j+1]>arr[j])
		{
			j=j+1;
		}
		if(arr[i]<arr[j])
		{
			swap(&arr[i],&arr[j]);
			i=j;
			j=i*2;  
		}
		else{
			break;
		}
	}
	n--;
}
int main()
{
	int arr[100];
	int insert;
	int i;
	int lenght;
	printf("Enter the size of the heap\n");
	scanf("%d",&n);
	lenght=n;
	printf("Enter the elements one by one\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	Delete(arr);
	Delete(arr);
	Delete(arr);
	Delete(arr);
	Delete(arr);
	Delete(arr);			
	for(i=1;i<=lenght;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
