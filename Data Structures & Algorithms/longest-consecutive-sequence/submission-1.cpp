class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int maxlen = 0;

        set <int> ss(nums.begin() , nums.end());

        for(int i = 0;i<nums.size();i++){
            int curr = nums[i];

            if(ss.find(curr - 1) == ss.end()){
                int length = 1;
                while(ss.find(curr+1) != ss.end()){
                    length++;
                    curr++;
                }
                maxlen = max(maxlen , length);
            }
        }
        return maxlen;
    }
};
