class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0 , h = nums.size() - 1;
        while(l <= h){
            int mid = l + (h-l) / 2;

            if(nums[mid] == target)
                return mid;
            if(nums[mid] <= nums[h]){
                if(target <= nums[h] and target > nums[mid]){
                    l = mid+1;
                } 
                else{
                    h = mid-1;
                }
            }
            else{
                if(target >= nums[l] and target <= nums[mid])
                    h = mid-1;
                else 
                    l = mid+1;
            }
        }
        return -1;
    }
};
