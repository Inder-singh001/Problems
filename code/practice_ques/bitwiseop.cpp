#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"a&b: "<<(a&b) <<endl;
    cout<<"a|b: "<<(a|b) <<endl;
    cout<<"~a: "<<~a <<endl;
    cout<<"~b: "<<~b <<endl;
    cout<<"a^b: "<<(a^b) <<endl;
    

// Left Shift/Right Shift
/* 
    ( 
        1. Left shift can be done only on small numbers because in some case large numbers are converted to negative numbers.
        2. In right shift, the  shift number is divided by n times the shift number is given; 16>>3 = 16/2*2*2 => 1, and in left shift it is multiplied; 5<<2 = 5*(2*2) => 20.
        3. In both the shift the padding is 0 i.e. the added 'n' new terms are always 0.
        4. in -ve number, the padding is based on compiler dependencies. 
    )
*/

    // cout<<(18>>1)<<endl;
    // cout<<(16>>3)<<endl;
    // cout<<(18<<2)<<endl;
    // cout<<(56<<1)<<endl;
    // cout<<(-18>>1)<<endl;
    // cout<<(-18<<2);
    


    // int c=10, d=1;
    // if (++c)
    // {
    //     cout<<d;
    // }
    // else
    //     cout<<++d;

    // int c=1, d=2;
    // if (c-- > 0 || ++d >2)
    // cout<<"Stage1 -inside if"<<endl;
    // else
    // cout<<"stage2 - inside else"<<endl;
    // cout<<c<<" "<<d;

    // int d=3, a=1,b=a++,c=++a;
    // cout<<25*(++d)<<endl;
    // cout<<b<<endl;
    // cout<<c;
    
    return 0;
}