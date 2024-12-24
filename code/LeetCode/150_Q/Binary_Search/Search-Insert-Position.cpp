class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, n = nums.size(), mid;
        int right = n-1;
        if(target > nums[right]){
            return n;
        }
        while (left != right){
            mid = left + (right - left)/2;
            if (target > nums[mid]){
                left = mid + 1;
            }
            else if(target < nums[mid]){
                right = mid;
            } 
            else{
                return mid;
            }
        }
        return left;
    }
};