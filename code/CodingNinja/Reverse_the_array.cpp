#include <bits/stdc++.h>
void reverseArray(vector<int> &arr, int m) {
	int left = m+1;
	int right = arr.size()-1;

	while (left<right)
	{
		swap(arr[left], arr[right]);
		left++;
		right--;
	}
}