class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mpp;
        for(char x:s){
            mpp[x]++;
        }
        for(char c: t){
            mpp[c]--;
        }
        for(auto it:mpp){
            if(it.second>0 || it.second<0){
                return false;
            }
        }
        return true;
        
    }
};