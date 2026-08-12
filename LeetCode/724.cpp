class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0;
        int rightsum=0;
        int n=nums.size();
        int totalsum=0;
        for(int num:nums){
            totalsum+=num;
        }

        for(int i=0;i<n;i++){
            rightsum=totalsum-leftsum-nums[i];
            if(rightsum==leftsum){
                return i;
            }
            else{
                leftsum+=nums[i];
            }
        }
        return -1;
    }
};