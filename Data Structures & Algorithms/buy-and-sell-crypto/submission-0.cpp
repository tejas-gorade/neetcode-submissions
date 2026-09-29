class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profit = 0 , maxprofit = 0 , mini = nums[0];
        for(int i = 1;i<nums.size();i++){
            profit = nums[i] - mini;
            mini = min(mini , nums[i]);
            maxprofit = max(profit , maxprofit);
        }
        return maxprofit;
    }
};
