class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int maxcnt=0;
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i]==1){
                cnt+=1;
                maxcnt=max(cnt,maxcnt);
            }
            else if(nums[i]!=1){
                cnt=0;
            }

        }
        return maxcnt;
    }
};