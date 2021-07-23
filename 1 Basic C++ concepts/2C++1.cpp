#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"How much size do you want"<<endl;
    cin>>n;
    int A[n];
    A[0]=1;
    A[1]=2;
    A[2]=2;
    A[3]=3;
    A[4]=3;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
    
    return 0;///Difference between the two program is that this one is intilized so it will print the values and remaining as a garbage values.But above one will intilize it to 0
}
