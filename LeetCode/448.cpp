class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (num > 0) {
                seen.insert(num);
            }
        }
        vector<int> n;

        for (int i = 1; i <= nums.size(); i++) {
            if (!seen.count(i)) {
                n.push_back(i);
            }
        }
        return n;

    }
};