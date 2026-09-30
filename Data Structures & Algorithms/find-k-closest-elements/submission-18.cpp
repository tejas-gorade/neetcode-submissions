class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        int l = 0  ;

        if( k >= nums.size())   return nums;

        for(int r = k-1 ; r < nums.size()-1;r++){
            if((x - nums[l]) > (nums[r+1] - x))
                l++;     
            else
                break;
        }
        return vector<int> (nums.begin() + l , nums.begin() + l + k);
    }
};