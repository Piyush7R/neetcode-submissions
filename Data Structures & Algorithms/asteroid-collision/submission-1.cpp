class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(auto ast: asteroids){
            bool destroy = false;
            while(!st.empty() && ast<0 && st.top()>0){
                if(abs(ast) == abs(st.top())){
                    destroy = true;
                    st.pop();
                    break;
                }
                else if(abs(ast) > abs(st.top())){
                    st.pop();
                }
                else{
                    destroy = true;
                    break;
                }

            }
            if(!destroy){
                st.push(ast);
            } 
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};