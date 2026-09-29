class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0 , maxlen = 0 , left = 0 , right = 0 , n = s.size();
        unordered_set<int> ss;

        while(right< n){
            if(ss.find(s[right]) == ss.end()){
                ss.insert(s[right]);
                len = right-left+1;
                maxlen = max(len , maxlen);
                right++;
            }
            else{
                ss.erase(s[left]);
                left++;
            }
        }
        return maxlen;
    }
};
