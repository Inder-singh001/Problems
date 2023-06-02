#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    unsigned int i=n;
    
    while(i<=n)
    {
        int j=i;
        while(j<=i)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
        i--;
    }
}


/*nt main()
{
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    int i=1;
    
    while(i<=n)
    {
        int j=i;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/