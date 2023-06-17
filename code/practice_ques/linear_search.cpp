#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int size, int key)
{
    for(int i=0; i<size ; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }

    }
    return 0;
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

    int key;
    cout<<"Enter the key You want to search: ";
    cin>>key;

    int ans = linear_search(arr, size, key);

    if (ans!=0)
    {
        cout<<"The key "<<key<<" is found at index "<<ans<<" in array";
    }
    else
    {
        cout<<"The key is not found in array";
    }    


    return 0;
}