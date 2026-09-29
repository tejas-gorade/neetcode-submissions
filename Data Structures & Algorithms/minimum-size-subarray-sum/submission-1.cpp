class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini = nums.size() , l = 0 , r = 0 , sum = 0 , len , total = 0;

        for(int num:nums){
            total += num;
        }
        if(total < target)
            return 0;

        for(r = 0 ; r < nums.size();r++){
            sum += nums[r];
    
            if(sum >= target){
                while(sum >= target){
                    len = r-l+1;
                    mini = min(len , mini);
                    sum -= nums[l];
                    l++;
                }
            }
        }
        return mini;
    }
};