#include<bits/stdc++.h>
using namespace std;

int array_sum(int arr[], int size)
{
    int sum = 0;

    for(int i=0; i<size ; i++)
    {
        sum += arr[i];    
    }
    return sum;
}
int main()
{
    int arr[100], size;
    cin>>size;

    for(int i=0; i<size ; i++)
    {
        cin>>arr[i];
    }    

    int arr_sum = array_sum(arr, size);

    cout<<"Sum of array: "<<arr_sum;
    
    return 0;
}