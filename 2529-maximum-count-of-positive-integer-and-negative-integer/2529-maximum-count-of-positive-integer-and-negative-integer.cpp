class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int p=0;
        int n=0;
        for(int x: nums){
            if(x>0){
                p++;
            }
            if(x<0){
                n++;
            }
        }
        return max(p,n);
        
    }
};