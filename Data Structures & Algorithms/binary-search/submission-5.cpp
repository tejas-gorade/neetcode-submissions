class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int low = 0 , high = nums.size()-1 , mid = 0;
        while(low <= high){
            mid = low + (high-low)/2;
            if(nums[mid] == tar)
                return mid;
            else if(nums[mid] > tar)
                high = mid-1;
            else
                low = mid+1;
        }
        return -1;
    }
};
