class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int right = 0, left = 0 , n = s.size();
        int len = 0 , maxlen = 0;
        unordered_set<int> ss;


        for(right = 0;right < n;right++){
            if(ss.find(s[right]) == ss.end()){
                ss.insert(s[right]);
                len = right - left + 1;
                maxlen = max(maxlen , len);
            }
            else{
                ss.erase(s[left++]);
                right--;
            }
        }
        return maxlen;
    }
};
