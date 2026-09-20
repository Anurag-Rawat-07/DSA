class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        for(int n : nums){
            mpp[n]++;
        }
        for(auto it:mpp){
            if(it.second>1){
                return true;
            }
        }
        return false;
    }
};