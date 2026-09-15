class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int total = 0;

        for (string c : operations) {

            if (c == "C") {
                st.pop();
            }
            else if (c == "D") {
                st.push(st.top() * 2);
            }
            else if (c == "+") {
                int first = st.top();
                st.pop();

                int second = st.top();

                st.push(first);
                st.push(first + second);
            }
            else {
                st.push(stoi(c));
            }
        }

        while (!st.empty()) {
            total += st.top();
            st.pop();
        }

        return total;
        
    }
};