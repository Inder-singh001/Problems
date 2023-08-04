#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> result;
   int n=arr.size();
   sort(arr.begin(),arr.end());
   for (int i=0; i<n-1; i++)
   {
      int j=i+1;
      while (j<n)
      {
         if (arr[i]+arr[j]==s)
         {
            result.push_back({arr[i],arr[j]});
         }
         j++;
      }
   }
   
   return result;
}