#include<bits/stdc++.h>
using namespace std;

class pattern
{   
    private:
        int n,m;
        int i=1;

    public:
        
        void normalform()
        {
            cout<<"Enter n: ";
            cin>>n;
            while (i<=n)
            {   
                int j=1;
                while(j<=n)
                {
                    cout<<j;
                    j++;
                }
                cout<<endl;
                i++;
            }

            cout<<endl<<endl;
        }

// pattern in reverse digits
        void reverse()
        {
            cout<<"Enter m: ";
            cin>>m;
            while (i<=m)
            {   
                int j=1;
                while(j<=m)
                {
                    cout<<m-j+1;
                    j++;
                }
                cout<<endl;
                i++;
            }  
        }
};

int main()
{   
    pattern form;
    int ls;
    
    while(true)
    {
        cout<<"Pattern Operations"<<endl;
        cout<<"1. pattern 1"<<endl;
        cout<<"2. pattern 1(reverse)"<<endl;
        cout<<"3. Exit the prpgram."<<endl;
        cin>>ls;
        switch(ls)
        {
            case 1:
            {
                form.normalform();
                break;
            }
            case 2:
            {
                form.reverse();
                break;
            }
            // case 3:
            // {
            //     cout<<"Exiting..."<<endl;
            //     break;
            // }
            default:
            {
                cout<<"Invalid operation."<<endl;
                break;
            }   

        }
    }
    
    
    return 0;
}