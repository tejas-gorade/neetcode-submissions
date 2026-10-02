class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int m = nums.size();
        int n = nums[0].size();
        int l = 0 , h = m*n - 1;
        while(l <= h){
            int mid = l + (h-l)/2;
            int r = mid/n;
            int c = mid % n;
            if(nums[r][c] == target)
                return true;
            else if(nums[r][c] < target)
                l = mid + 1;
            else
                h = mid-1;
        }
        return false;
    }
};
