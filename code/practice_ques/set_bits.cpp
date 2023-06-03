#include<bits/stdc++.h>
using namespace std;

int set_bits(int n)
{
    int count=0;
    while (n!=0)
    {
        if (n&1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main()
{
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    int bit1 = set_bits(num1);
    int bit2 = set_bits(num2);
    int ans = bit1 + bit2;

    cout<<"The set bits of two numbers: "<<bit1 + bit2;
    
    return 0;
}