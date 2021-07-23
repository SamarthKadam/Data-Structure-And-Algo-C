//This is possible in c++ but not in c,that is at run time we can set the values of n
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How much size do you want"<<endl;//So here we used c++ where A is intilized in thi fassion so if we printf or give 10 value it will print till 10;
    cin>>n;
    int A[n]={1,2,3,4,5,6,3};
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
    
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
	int i;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
	
}
