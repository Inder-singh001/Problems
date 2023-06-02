#include<bits/stdc++.h>
using namespace std;


int main()
{// break infinite loop
    int a;
    cin>>a;
    while (a!=0)
    {
        
        switch(a)
        {
            case 1:
            {
                cout<<"one";
                break;
            }

            case 2:
            {
                cout<<"two";
                break;
            }
            default:
                cout<<"Choose another no.";
                break;
        }
        exit(0); // exit() or break function can be used
    }
    
    return 0;
}