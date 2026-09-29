class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longest_prefix = strs[0];
        for(const string str:strs){
            string prefix = "";
            for(int i = 0;i<longest_prefix.size();i++){
                if(str[i] == longest_prefix[i])
                    prefix += longest_prefix[i];
                else
                    break;
            }
            longest_prefix = prefix;
        }
        return longest_prefix;
    }
};