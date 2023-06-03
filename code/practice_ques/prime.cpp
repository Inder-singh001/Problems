#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            return 0;  // 0 --> False
        }
    }
    return 1;   // 1 --> True
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    // bool isPrime=1;

    // for(int i=2; i<=n; i++)
    // {
    //     if (n%i==0)
    //     isPrime=0;
    //     break;
    // }
    
    if (isPrime(n))
        cout<<n<<" is a prime number.";
    else
        cout<<n<<" is not a prime number."; 
    
    return 0;
}