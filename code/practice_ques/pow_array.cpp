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

int pow_array(int arr[], int size)
{
    int num1, n;
    for(int i=0; i<size ; i++)
    {
        n = arr[i];
        num1=count_bits(n);

        if (num1==1)
        {
            return n; 
        }
    }

    return n;
}

int main()
{
    int arr[100];
    int size;
    cin>>size;

    for(int i=0; i<size ; i++)
    {
        cin>>arr[i];
    }

    cout<<"Power of 2 in array: "<<pow_array(arr, size);
    
    return 0;
}