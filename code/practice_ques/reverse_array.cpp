#include<bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int size)
{
    int start = 0, end = size-1;

    while (start <= end)    
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
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
    reverse_array(arr, size);
    
    cout<<"The reverse of an array: ";
    print_array(arr, size);

    return 0;
}