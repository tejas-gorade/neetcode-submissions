class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0 , j = s.size() - 1;
        while(i < j){
            if(s[i] != s[j]){
                return checkpal(s , i+1 , j) || checkpal(s , i , j-1);
            }
            i++;
            j--;
        }
        return true;
    }
    bool checkpal(const string &s , int i , int j){
        while(i < j){
            if(s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};