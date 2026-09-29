class Solution {
public:
    int trap(vector<int>& nums) {
        int area = 0 , i = 0 , j = nums.size() - 1 , left_max = 0, right_max = 0;
        while(i <j and nums[i] < nums[i+1]){
            i++;
        }
        while(i < j and nums[j] < nums[j-1]){
            j--;
        }
        int water = 0 ;
        while(i < j){
            if(nums[i] <= nums[j]){
                if(nums[i] > left_max){
                    left_max = nums[i];
                }
                else{
                    water += left_max - nums[i];
                }
                i++;
            }
            else{
                if(right_max < nums[j]){
                    right_max = nums[j] ;
                }
                else{
                    water += right_max - nums[j];
                }
                j--;
            }
        }
        return water;
    }
};
