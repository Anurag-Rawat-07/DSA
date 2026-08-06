class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();

        int row=n-1;
        int cols=0;

        while(row>=0 && cols<m){
            
            if(matrix[row][cols]==target){
                return true;
            }
            if(matrix[row][cols]>target){
                row--;
            }
            else{
                cols++;
            }
        }
        return false;
    }
        
};