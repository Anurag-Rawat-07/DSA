class Solution {
public:
    int countDigits(int num) {
        int num2=num;
        int count=0;
        while(num>0){
            int digit=num%10;
            if(num2 % digit ==0){
                count++;
            }
            num=num/10;
        }
        return count;
        
    }
};