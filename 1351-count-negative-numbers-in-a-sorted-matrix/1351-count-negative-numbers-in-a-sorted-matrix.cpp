class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=0;
        for(vector<int> x: grid){
            for(int y: x){
                if(y<0){
                    n++;
                }
            }
        }
        return n;
    }
};