class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(const string str:strs){
            for(int i =0;i<str.length();i++){
                s += to_string(str[i] - 5);
                s += 'a';
            }
            s += '#';
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        string str , number;
        int num;
        ;
        for(int i = 0;i<s.length();i++){
            if(s[i] != '#'){
                while(s[i] != 'a'){
                    number += s[i];
                    i++;
                }
                num = stoi(number);
                number = "";

                str += char(num + 5);
            }
            else{
                strs.push_back(str);
                str = "";
            }
        }
        return strs;
    }
};
