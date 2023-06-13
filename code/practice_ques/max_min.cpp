#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[], int size)
{
    int maxi = INT_MIN;
    for(int i=0; i<size ; i++)
    {
        maxi=max(maxi, arr[i]);  //pre-defined function

        // if (max<arr[i])
        // {
        //     max=arr[i];
        // }
    }

    return maxi;
}

int getMin(int arr[], int size)
{
    int mini = INT_MAX;
    for(int i=0; i<size ; i++)
    {
        mini=min(mini, arr[i]);      //pre-defined function    

    //     if (min>arr[i])
    //     {
    //         min=arr[i];
    //     }
    }
    // return min;

    return mini;
}
int main()
{
    int arrsize;
    cin>>arrsize;

    int num[100];

    for(int i=0; i<arrsize ; i++)
    {
        cin>>num[i];
    }

    cout<<"Maximum value in array: "<<getMax(num, arrsize)<<endl;
    cout<<"Minimum value in array: "<<getMin(num, arrsize);
    
    return 0;
}