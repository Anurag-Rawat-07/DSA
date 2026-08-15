class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>x;

        for(int num:nums){
            if(x.count(num)){
                return num;
            }
            x.insert(num);
        }
        return -1;
    }
};