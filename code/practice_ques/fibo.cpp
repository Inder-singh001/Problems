#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,a=0,b=1;
    cout<<"Enter no.: ";
    cin>>n;
    cout<<a<<" , ";

    for(int i=1; i<n; i++)
    {
        int sum=a+b;
        cout<<sum<<" , ";
        a=b;
        b=sum;
    }
    
    return 0;
}