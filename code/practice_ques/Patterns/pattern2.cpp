#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=1,m=1;
    cout<<"Enter no. of rows and columns: ";
    cin>>n;

    while(i<=n)
    {   
        int j=1;
        while(j<=n)
        {   
            cout<<"  "<<m<<"  ";
            m++;
            j++;
        }
        cout<<endl;
        i++;
    }

// reverse the pattern
    unsigned int l=n*n;

    while(i<=n)
    {   
        int j=1;
        while(j<=n)
        {   
            cout<<"  "<<l<<"  ";
            l--;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}