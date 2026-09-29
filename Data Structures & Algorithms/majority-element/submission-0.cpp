class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int> mpp;
        for(int x : nums){
            mpp[x]++;
        }
        for(auto p : mpp){
            if(p.second > nums.size()/2)
                return p.first;
        }
    }
};