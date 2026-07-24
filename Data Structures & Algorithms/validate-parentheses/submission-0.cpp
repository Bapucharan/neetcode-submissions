class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> ans = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(char c : s){
            if(ans.count(c)){
                if(!st.empty() && st.top() == ans[c]){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                st.push(c);
            }
        }

        return st.empty();
    }
};
