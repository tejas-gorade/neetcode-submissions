class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> vec;
        unordered_map<string , vector<string>> mpp;

        for(const string str:strs){

            int freq[26] = {0};

            for(char ch:str){
                freq[ch-'a']++;
            }

            string key = "";

            for(int i = 0;i<26;i++){
                key += '@' + freq[i];
            }
            
            mpp[key].push_back(str);
        }

        for(const auto x:mpp){
            vec.push_back(x.second);
        }

        return vec;
    }
};
