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

void power_array(int arr[], int size)
{
    int n, num;

    for(int i=0; i<size ; i++)
    {
        n = arr[i];
        num=count_bits(n);

        while(num==1)
        {
            cout<<n<<" "; 
            break;
        }
    }
}

int main()
{
    int arr[100];
    int size;

    cout<<"Size of array: ";
    cin>>size;

    cout<<"The Array: ";
    for(int i=0; i<size ; i++)
    {
        cin>>arr[i];
    }

    cout<<"Power of 2 elements in array: ";

    power_array(arr, size);

    return 0;
}