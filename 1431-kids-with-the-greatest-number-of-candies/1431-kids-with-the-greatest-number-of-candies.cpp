class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=0;
        vector<bool>ans;
        for(int x: candies){
            if(x>max){
                max=x;
            }
        }
        for(int x:candies){
            if(x+extraCandies>=max){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;

    }
};