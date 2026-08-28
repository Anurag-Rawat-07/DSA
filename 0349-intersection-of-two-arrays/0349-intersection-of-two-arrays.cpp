class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1;
        unordered_set<int>s2;

        for(int num: nums1){
            s1.insert(num);
        }
        for (int x : s1) {
            for (int num : nums2) {
                if (num == x) {
                    s2.insert(num);
                }
            }
        }
        return vector<int>(s2.begin(), s2.end());
        
    }
};