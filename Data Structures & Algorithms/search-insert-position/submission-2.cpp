class Solution {
public:
    int searchInsert(vector<int>& nums, int tar) {
        int low = 0 , high = nums.size() - 1 ,  mid = 0;
        while(low <= high){
            mid = low + (high-low) / 2;
            if(nums[mid] == tar)
                return mid;
            else if(nums[mid] < tar){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return low;
        
    }
};