class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());
        for(int i = 0;i<nums.size();i++){
            if(i>0 and nums[i] == nums[i-1])
                continue;
            int left = i+1 , right = nums.size()-1;
            int tar = -nums[i];
            while(left < right){
                if(nums[left] + nums[right] > tar)
                    right--;
                else if(nums[left] + nums[right] < tar)
                    left++;
                else{
                    ans.push_back({nums[i] , nums[left] , nums[right]});
                    while(left < right and nums[left] == nums[left+1]){
                        left++;
                    }
                    while(left < right and nums[right] == nums[right-1]){
                        right--;
                    }
                    left++;
                    right--;
                }    
            }
        }
        return ans;
    }
};
