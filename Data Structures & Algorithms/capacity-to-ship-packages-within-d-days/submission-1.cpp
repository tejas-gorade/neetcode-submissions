class Solution {
public:
    int shipWithinDays(vector<int>& nums, int days) {
        int l = 0 , h = 0 ;
        for(int x: nums){
            h += x;
            l = max(l,x);
        }
        int ans = h;

        while(l <= h){

            int mid = l + (h-l)/2;
            int sum = 0;
            int i = 0 , d = 1;
            
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