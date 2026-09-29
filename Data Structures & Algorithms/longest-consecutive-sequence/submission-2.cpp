class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int maxlen = 0;

        set <int> ss(nums.begin() , nums.end());

        for(int i = 0;i<nums.size();i++){
            int curr = nums[i];

            if(!ss.contains(curr - 1)){
                int length = 1;
                while(ss.contains(curr+1)){
                    length++;
                    curr++;
                }
                maxlen = max(maxlen , length);
            }
        }
        return maxlen;
    }
};
