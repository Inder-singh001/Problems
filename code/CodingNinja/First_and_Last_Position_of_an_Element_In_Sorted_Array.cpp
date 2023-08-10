#include <bits/stdc++.h> 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{   pair<int,int> result={-1,-1};
    int low=0, high=n-1;
    while (low<=high)
    {
        int mid=low+((high-low)/2);
        if (arr[low]==k || arr[high]==k)
        {
            result.first=low;
            result.second=high;
        }
        
        if(arr[mid]==k)
        {
            while (arr[mid-1]==k && mid>0)
            {
                mid--;
            }
            result.first=mid;
            while (arr[mid+1]==k && mid<n-1)
            {
                mid++;
            }
            result.second=mid;
            return result;
        }
        else if (arr[mid]>k)
            high=mid-1;
        else
            low=mid+1;

    }
    return result;
}