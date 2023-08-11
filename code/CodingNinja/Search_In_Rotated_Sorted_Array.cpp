int search(vector<int>& arr, int n, int k)
{
    int low=0, high=n-1;
    if (arr[high]==k)
    {
        return high;
    }
    while (high>low)
    {
        int mid = low+((high-low)/2);
        if (arr[mid]==k)
        return mid;
        else if (arr[mid]>k && arr[mid+1]>k)
        high=mid;
        else
        low=mid+1;
    }
    return -1;
}
