class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countzero = 0 , countone = 0 , counttwo = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 0)
                countzero++;
            else if(nums[i] == 1)
                countone++;
            else
                counttwo++;
        }
        for(int i = 0;i<nums.size();i++){
            if(i < countzero)
                nums[i] = 0;
            else if(i < countone+countzero)
                nums[i] = 1;
            else
                nums[i] = 2;
        }
    }
};