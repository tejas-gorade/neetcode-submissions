class Solution {
public:
    bool isAnagram(string s, string t) {
        char freq[26] = {0};
        for(char ch:s){
            ch = tolower(ch);
            freq[int (ch-97)]++;
        }
        for(char ch:t){
            ch = tolower(ch);
            freq[int (ch-97)]--;
        }
        for(int i = 0;i<26;i++){
            if(freq[i] != 0)
                return false;
        }
        return true;
    }
};
