class Solution {
public:
    string removeStars(string s) {
        string v;
        stack<char>st;
        for(char x: s){
            if(x=='*'){
                st.pop();
            }
            else{
                st.push(x);
            }
        }
        while (!st.empty()) {
            v += st.top();
            st.pop();
        }
        reverse(v.begin(), v.end());
        return v;

    }
};