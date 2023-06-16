#include<bits/stdc++.h>
using namespace std;

int count_bits(int num)
{
    int count=0;
    while (num!=0)
    {
        if (num&1)
        {
            count++;
        }
        num =num >> 1;
    }
    return count;
}


int main()
{
    int arr[100];
    int size;
    cin>>size;
    int n,num1;

    for(int i=0; i<size ; i++)
    {
        cin>>arr[i];
    }

    cout<<"Power of 2 elements in array: ";

    for(int i=0; i<size ; i++)
    {
        n = arr[i];
        num1=count_bits(n);

        while(num1==1)
        {
            cout<<n<<" "; 
            break;
        }
    }

    return 0;
}