class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0;
        int cols=matrix[0].size()-1;

        while(row<=cols){
            int value=matrix[row][cols];
    
        if(value==target){
            return true;
            }
            else if(value>target){
                cols--;
                }
                else{
                    row++;
                    }}
                    return false;
                    }
}; 
 