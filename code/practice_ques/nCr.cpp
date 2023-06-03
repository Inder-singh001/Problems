#include<bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    int fact = 1;

    for(int i = 1; i<=num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int dem = factorial(r) * factorial(n - r);
    int ans = num / dem;
    
    return ans;
}

int main()
{
    int n, r, ans;
    cin>>n>>r;
    ans = nCr(n,r);
    cout<<"The answer = "<<ans;
    
    return 0;
}