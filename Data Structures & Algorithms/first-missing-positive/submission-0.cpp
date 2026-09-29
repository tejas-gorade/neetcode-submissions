class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> ss(nums.begin() , nums.end());
        int k = 1;
        for(int i = 0;i< nums.size();i++){
            if(!ss.contains(k)){
                break;
            }
            k++;
        }
        return k;
    }
};