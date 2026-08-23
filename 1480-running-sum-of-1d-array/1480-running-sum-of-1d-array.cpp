class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        int temp;
        for(int i=0; i<nums.size();i++){
            temp=nums[i];
            nums[i]+=sum;
            sum+=temp;
        }
        return nums;
    }
};