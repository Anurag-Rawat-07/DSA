class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        int m=1;
        for(char c: s){
            ans+=m*('z' - c + 1);
            m++;
        }
        return ans;
        
    }
};