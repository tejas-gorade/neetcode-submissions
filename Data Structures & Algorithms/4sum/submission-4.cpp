class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());

        for(int i = 0;i<nums.size();i++){
            if(i>0 and nums[i] == nums[i-1])    
                continue;

            for(int j = i + 1;j<nums.size();j++){
                if(j > i+1 and nums[j] == nums[j-1])
                    continue;

                long long tar = (long long)target - nums[i] - nums[j];
                int left = j+1 , right = nums.size() - 1;

                while(left < right){
                    if((long long)nums[left] + nums[right] > tar)
                        right--;
                    else if((long long)nums[left] + nums[right] < tar)
                        left++;
                    else{
                        ans.push_back({nums[i] ,nums[j] ,nums[left] ,nums[right]});

                        while(left < right and nums[left] == nums[left +1]){
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
        }
        return ans;
    }
};