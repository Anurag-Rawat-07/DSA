class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (num > 0) {
                seen.insert(num);
            }
        }

        for (int i = 1; i <= nums.size(); i++) {
            if (!seen.count(i)) {
                return i;
            }
        }

        return nums.size() + 1;
    }
};