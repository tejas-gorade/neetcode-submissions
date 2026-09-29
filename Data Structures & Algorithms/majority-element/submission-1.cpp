class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int key = nums[0] , count = 0;
        for(int num:nums){
            if(num == key)
                count++;
            else{
                count--;
                if(count <0){
                    key = num;
                    count = 0;
                }
            }
        }
        return key;
    }
};