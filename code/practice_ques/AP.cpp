#include<bits/stdc++.h>
using namespace std;

int AP(int n)
{
    int Ap_series = (3 * n) + 7;
    return Ap_series;
}
int main()
{
    int n;
    cout<<"Enter the nth term: ";
    cin>>n;

    int ans = AP(n);
    cout<<ans;
    
    return 0;
}