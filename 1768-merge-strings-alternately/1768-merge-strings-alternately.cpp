class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int n1=word1.size()-1;
        int n2=word2.size()-1;
        int m=max(word1.size(), word2.size());
        for(int i=0; i<m; i++){
            if(i<=n1){
                s.push_back(word1[i]);
            }
            if(i<=n2){
                s.push_back(word2[i]);
            }
        }
        return s;
    }
};