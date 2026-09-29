class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> vec(2*nums.size(),0);
        for(int i =0;i<vec.size();i++){
            if(i < nums.size())
                vec[i] = nums[i];
            else
                vec[i] = nums[i - nums.size()];
        }
        return vec;
    }
};