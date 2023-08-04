#include<bits/stdc++.h>
using namespace std;

void swap_alternate_array(int arr[], int size)
{
    // int start = 0, end = 1;

    // while (end < size)    
    // {
    //     swap(arr[start], arr[end]);
    //     start += 2;
    //     end  = start + 1;
    // }

    // alternate method
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap( arr[i], arr[i+1]);
        }
    }
}

void print_array(int arr[], int size)
{
    for(int i=0; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }   
}

int main()
{
    int arr[100], size;

    cout<<"Size of array: ";
    cin>>size;

    cout<<"The Array: ";
    for(int i=0; i<size ; i++)
    {
        cin>>arr[i];
    }

    swap_alternate_array(arr, size);
    
    cout<<"The reverse of an array: ";
    print_array(arr, size);

    return 0;
}