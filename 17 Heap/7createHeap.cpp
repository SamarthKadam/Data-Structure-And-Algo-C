 #include<stdio.h>
void insert(int arr[50],int n)
{
	int temp,i=n;
	temp=arr[n];
	while(i>1&&temp>arr[i/2])
	{
		arr[i]=arr[i/2];
		i=i/2;
	}
	arr[i]=temp;
	
}
int main()
{
	int arr[50]={0,10,20,30,25,5,40,35};
	int i;
	for(i=2;i<=7;i++)
     {
	 insert(arr,i);
	 }                   ////n is 7 in this case
	 for(i=1;i<=7;i++)
	 {
	 	printf("%d",arr[i]);
	 }
	 return 0;
}
