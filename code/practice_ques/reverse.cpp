#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,r;
    cout<<"Enter n: ";
    cin<<n;

    for( int i=0; i<=n; i++)
    {
        r=n%10;
        cout<<r;
        n=n/10;
    }
    
    return 0;
}