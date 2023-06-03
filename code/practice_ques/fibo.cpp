#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    int a=0, b=1, sum;
    for(int i=2; i<n ; i++)
    {
        sum = a + b;
        a=b;
        b=sum;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter no.: ";
    cin>>n;

    int ans = fibo(n);
    cout<<"The nth term is: "<<ans;
    
    return 0;
}