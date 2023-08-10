#include<bits/stdc++.h>
using namespace std;

int findUnique(int* arr, int size){
    int ans;
    for (int i=0; i<size; i++)
    {
       ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    
    int size, arr[size];
    cin>> size;
    return findUnique(arr,size);
    
    return 0;
}

