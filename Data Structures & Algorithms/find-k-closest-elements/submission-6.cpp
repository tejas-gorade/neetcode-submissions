class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        int close;
        if(k == 0)
            return {};

        int l = 0 , r = 0;
        vector<int> vec;
        int closest = 0;

        for(int i = 0;i<nums.size();i++){
            if(abs(x-nums[i]) < abs(x-nums[closest])){
                closest = i;
            }
        }
        vec.push_back(nums[closest]);
        k--;
        l = closest - 1;
        r = closest + 1;
        
        while(k != 0){
            if(l < 0){
                close = nums[r];
                r++;
            }
            else if(r >= nums.size()){
                close = nums[l];
                l--;
            }
            else{
                if(abs(x-nums[l]) <= abs(x-nums[r])){
                        close = nums[l];
                        l--;
                }
                else{
                    close = nums[r];
                    r++;
                }
            }
            vec.push_back(close);
            k--;
        }
        sort(vec.begin() , vec.end());
        return vec;
    }
};