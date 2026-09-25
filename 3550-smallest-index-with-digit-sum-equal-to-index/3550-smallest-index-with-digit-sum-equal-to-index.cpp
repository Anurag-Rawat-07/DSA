class Solution {
public:
    int smallestIndex(vector<int>& nums) {

        for(int i=0;i<nums.size();i++){
            int sum=0;
            int a=nums[i];
            while(a>0){
                int r=a%10;
                sum+=r;
                a=a/10;
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
        
    }
};