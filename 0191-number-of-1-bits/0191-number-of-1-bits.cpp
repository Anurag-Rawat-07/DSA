class Solution {
public:
    int hammingWeight(int n) {
        string res="";
        int cnt=0;
        while(n!=1){
            if(n%2==1){
                res+='1';
                cnt++;
            }
            else{
                res+='0';
            }
            n=n/2;
        }
        return cnt+1;
        
    }
};