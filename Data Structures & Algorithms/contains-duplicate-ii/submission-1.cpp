class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int left = 0  , right = k;
        if( k >= nums.size())
            right = nums.size() - 1;
        unordered_set<int> ss;
        for(int i = 0;i<=right;i++){
            if(ss.find(nums[i]) != ss.end())
                return true;
            ss.insert(nums[i]);
        }
        for(int j = k+1;j<nums.size();j++){
            ss.erase(nums[left++]);
            if(ss.find(nums[j]) != ss.end()){
                return true;
            }
            ss.insert(nums[j]);
        }
        return false;
    }
};