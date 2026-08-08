class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0)){
            return false;
        }
        unsigned int reverse=0;
        int original=x;

        while(x!=0){
            reverse=(reverse*10)+(x%10);
            x=x/10;
        }
        if(reverse==original){
            return true;
        }
        else{
            return false;
        }
        
    }
};