class Solution {
public:
    int shipWithinDays(vector<int>& nums, int days) {
        int l = 0 , tw = 0 , h ;
        for(int x: nums){
            tw += x;
            l = max(l,x);
        }
        h = tw;
        int sum = 0 , ans = h;

        while(l <= h){

            int mid = l + (h-l)/2;

            int i = 0 , d = 1;
            sum = 0;
            for(int num : nums){
                sum += num;
                if(sum > mid){
                    d++;
                    sum = num;
                }
            }

            if(d <= days){
                ans = mid;
                h = mid-1;
            }
            else
                l = mid + 1;
        }
        return ans;
    }
};