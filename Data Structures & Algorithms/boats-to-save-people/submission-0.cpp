class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        int left = 0 , right = nums.size() - 1, count = 0;
        sort(nums.begin() , nums.end());
        
        while(left <= right){
            if(nums[left] + nums[right] > limit){
                count++;
                right--;
            }
            else{
                count++;
                left++;
                right--;
            }
        }
        return count;
    }
};