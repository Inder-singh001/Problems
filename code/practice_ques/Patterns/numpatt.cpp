#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    // int i=1;
    // while(i<=n)
    // {
    //     int j=1;
    //     while(j<=i)
    //     {
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

// reverse the pattern

   int a=n, b=a;
   while(a<=n)
   {
        while(b<=a)
        {
            cout<<n;
            b++;
        }
        cout<<endl;
        a++;
   }

}