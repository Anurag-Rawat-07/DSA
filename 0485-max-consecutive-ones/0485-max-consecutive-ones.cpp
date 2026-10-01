class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int c=0;
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i]==1){
                c+=1;
                cnt=max(cnt,c);
            }
            else if(nums[i]!=1){
                c=0;
            }

        }
        return cnt;
    }
};