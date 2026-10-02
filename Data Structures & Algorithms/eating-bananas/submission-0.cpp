class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int hours) {
        int l = 1 , h = 0 , i = 0 , ans = 0;
        for(int x:piles){
            if(x > h)
                h = x;
        }

        while(l <= h){
            int count = 0;
            i = 0;
            int mid = l + (h-l)/2;

            while(i < piles.size()){

                if(piles[i] % mid != 0)
                    count++;

                count += piles[i] / mid;
                i++;
            }

            if(count > hours){
                l = mid + 1;
            }
            else if(count <= hours){
                ans = mid;
                h = mid - 1;
            }
        }
    return ans;
    }
};
