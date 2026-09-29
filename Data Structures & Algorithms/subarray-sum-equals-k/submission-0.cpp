class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int> mpp;
        int ps = 0 ,count = 0;
        mpp[0] = 1;
        for(int i = 0;i<nums.size();i++){
            ps += nums[i];

            if(mpp.find(ps-k) != mpp.end()){
                count += mpp[ps-k];
            }

            mpp[ps]++;
        }
        return count;
    }
};