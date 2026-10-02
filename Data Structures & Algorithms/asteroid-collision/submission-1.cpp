class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack <int> st;
        vector<int> ans;
        
        for(int x:asteroids){
            bool flag = true;
            while(!st.empty() and st.top() > 0 and x < 0){
                if(st.top() < abs(x)){
                    st.pop();
                }
                else if(st.top() == abs(x)){
                    flag = false;
                    st.pop();
                    break;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                st.push(x);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};