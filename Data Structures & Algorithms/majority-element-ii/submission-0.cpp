class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        vector<int> vec;
        for(int num :nums){
            mpp[num]++;
        }
        for(auto p : mpp){
            if(p.second > nums.size()/3)
                vec.push_back(p.first);
        }
        return vec;
    }
};