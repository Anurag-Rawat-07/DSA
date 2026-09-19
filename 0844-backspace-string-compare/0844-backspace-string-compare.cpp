class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> st;
        for(char c : s){
            if(c=='#'){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(c);
            }
        }
        stack<int> sta;
        for(char p : t){
            if(p=='#'){
                if(!sta.empty()){
                    sta.pop();
                }
            }
            else{
                sta.push(p);
            }
        }
        if(st==sta){
            return true;
        }
        return false;
    }
};