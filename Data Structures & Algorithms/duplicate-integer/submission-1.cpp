class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int j = 0;
        for(int i = 1; i<nums.size() ;i++){
            if(nums[i] != nums[j])
                j++;
            else
                return true;
        }
        return false;
    }
};