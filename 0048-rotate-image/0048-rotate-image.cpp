class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
int rows=matrix.size();
int cols=matrix[0].size();
vector<vector<int>>rotatedMatrix(cols,vector<int>(rows));

for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        rotatedMatrix[j][rows-1-i]=matrix[i][j];
    }
}
    matrix = rotatedMatrix;


    }  
};