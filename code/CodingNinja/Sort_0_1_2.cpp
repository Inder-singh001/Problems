#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int i=0,s=0;
   int j=n-1;

   while(i<=j)
   {
        if (arr[i]==0)
        {
            swap(arr[i], arr[s]);
            s++;
            i++;
        } 
        else if (arr[i] == 1) 
        {
            i++;
        } 
        else if (arr[i] == 2) 
        {
            swap(arr[i], arr[j]);
            j--;
        }
   }
}