class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        stack<int> st;

        for(string str : operations){
            if(str == "D"){
                st.push(st.top() * 2);
            }
            else if(str == "+"){
                int prev = st.top();
                st.pop();
                int add = prev + st.top();
                st.push(prev);
                st.push(add);
            }
            else if(str == "C"){
                st.pop();
            }
            else{
                int x = stoi(str);
                st.push(x);
            }
        }

        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};