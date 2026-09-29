class Solution {
public:

    bool checkarr(int freq[] , int check[]){
        for(int i = 0 ;i <26;i++){
            if(freq[i] != check[i])
                return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {

        if(s1.size() > s2.size())
            return false;

        int freq[26] = {0}, check[26] = {0};
        bool flag = false;
        for(char ch:s1){
            freq[(int)(ch - 'a')]++;
        }

        for(int i = 0;i<s1.size();i++){
            check[(int)(s2[i] - 'a')]++;
        }

        flag = checkarr(freq , check);
        if(flag)
            return true;

        int right = s1.size() , left = 0;

        while(right < s2.size()){
            check[s2[right++]-'a']++;
            check[s2[left++]-'a']--;
            flag = checkarr(freq , check);
            if(flag)
                return true;
        }
        return flag;
    }
};

