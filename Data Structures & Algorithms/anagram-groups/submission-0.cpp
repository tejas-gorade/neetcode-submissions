class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<vector<int> , vector<string> > mpp;
        vector<vector<string>> vec;

        for(const string str: strs){
            vector<int> freq(26,0);

            for(char ch:str){
                freq[ch-'a']++;
            }

            mpp[freq].push_back(str);
        }

        for(auto x:mpp){
            vec.push_back(x.second);
        }
        
        return vec;
    }   
};
