class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        string c=s+s;

        if(c.find(goal)!=string::npos){
            return true;
        }
        else{
            return false;
        }

    }
};