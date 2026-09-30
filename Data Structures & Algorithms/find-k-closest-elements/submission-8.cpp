class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        int l = 0 , r = nums.size() - k;

        while(l < r){
            int mid = l + ((r-l) / 2) ;
            if(x - nums[mid] <= nums[mid+k]-x)
                r = mid;
            else
                l = mid+1;
        }
    return vector<int> (nums.begin() + l , nums.begin() + l + k);
    }
};