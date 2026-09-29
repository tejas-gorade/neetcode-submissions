class Solution {
public:
    int maxArea(vector<int>& nums) {
        int maxarea = 0 , left = 0 , right = nums.size()-1;
        while(left < right){
            int h = min(nums[left] , nums[right]);
            int area = h * (right - left);
            maxarea = max(area , maxarea);
            if(nums[left] < nums[right])
                left++;
            else 
                right--;
        }
        return maxarea;
    }
};
