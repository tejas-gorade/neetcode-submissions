class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini = nums.size();
        int left = 0 , right = 0 , len , sum = 0 , total = 0;

        for(int x:nums){
            total += x;
        }
        if(total < target)
            return 0;

        while(right < nums.size()){

            sum += nums[right];

            if(sum >= target){
                while(sum >= target){
                    len = right - left + 1;
                    mini = min(len , mini);
                    sum -= nums[left++];
                }
            }
            right++;
        }
        return mini;
    }
};