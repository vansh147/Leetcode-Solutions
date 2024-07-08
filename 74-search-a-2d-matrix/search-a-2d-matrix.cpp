class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[i].size();j++){
        //         if(target == matrix[i][j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        int rows = matrix.size();
        int cols = matrix[0].size();
        int row = 0;
        int col = cols-1;
        while(row<rows && col>=0){
            if(matrix[row][col] == target){
                return true;
            }
            else if(target<matrix[row][col]){
                col--;
            }
            else{
                row++;
            }
        }
        return false;
    }
};