class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int result = 0;
        if(tokens.size() == 1){
            return stoi(tokens[0]);
        }
        stack<int> st;
        for(string str : tokens){
            if(str == "+"){
                int second = st.top();
                st.pop();
                result = st.top() + second;
                st.pop();
                st.push(result);
            }
            else if(str == "-"){
                int second = st.top();
                st.pop();
                result = st.top() - second;
                st.pop();
                st.push(result);
            }
            else if(str == "*"){
                int second = st.top();
                st.pop();
                result = st.top() * second;
                st.pop();
                st.push(result);
            }
            else if(str == "/"){
                int second = st.top();
                st.pop();
                result = st.top() / second;
                st.pop();
                st.push(result);
            }
            else{
                st.push(stoi(str));
            }
        }
        return result;
    }
};
