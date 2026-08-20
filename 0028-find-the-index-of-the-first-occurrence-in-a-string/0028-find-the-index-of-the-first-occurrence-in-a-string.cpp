class Solution {
public:
    int strStr(string haystack, string needle) {
        int str_len=haystack.size();
        int pat_len=needle.size();
        for (int i = 0; i <= str_len - pat_len; i++) {
            int j;
             for (j = 0; j < pat_len; j++) {
                if(haystack[i+j]!=needle[j]){
                    break;
                }
            }
            if(j==pat_len){
                return i;
            }
        }
        return -1;
    }
};