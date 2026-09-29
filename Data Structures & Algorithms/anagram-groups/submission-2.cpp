class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vec;
        unordered_map<string , vector<string>> mpp;

        for(const string &str : strs){
            string key(26,0);

            for(char ch:str){
                key[ch-'a']++;
            }
            mpp[key].push_back(str);
        }
        for(const auto &x : mpp){
            vec.push_back(x.second);
        }
        return vec;
    }
};
