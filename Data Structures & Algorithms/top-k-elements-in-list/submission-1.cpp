class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int , int> mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        vector<pair<int ,int>> vec;
        for(auto p:mpp){
            vec.push_back({p.second , p.first});
        }
        sort(vec.rbegin() , vec.rend());
        vector<int>ans;
        for(int i = 0;i<k;i++){
            ans.push_back(vec[i].second);
        }
        return ans;
    }
};
