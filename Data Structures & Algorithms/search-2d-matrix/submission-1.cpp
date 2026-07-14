class Solution {
public:
    int help_row(int row1, int row2, vector<vector<int>>& matrix, int target){
        if(target < matrix[row1][0] || target > matrix[row2][matrix[row2].size() - 1]){
            return -1;
        }
        int mid = row1 + (row2 - row1)/2;
        if(matrix[mid][0] > target){
            return help_row(row1, mid - 1, matrix, target);
        }
        if(matrix[mid][matrix[mid].size() - 1] < target){
            return help_row(mid + 1, row2, matrix, target);
        }
        return mid;
    }
    bool help_col(int row, int col1, int col2, vector<vector<int>>& matrix, int target){
        if(target < matrix[row][col1] || target > matrix[row][col2]) return false;
        int mid = col1 + (col2 - col1)/2;
        if(target < matrix[row][mid]){
            return help_col(row, col1, mid - 1, matrix, target);
        }
        if(target > matrix[row][mid]){
            return help_col(row, mid + 1, col2, matrix, target);
        }
        return true;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = help_row(0, matrix.size() - 1, matrix, target);
        cout << row;
        if(row == -1) return false;
        return help_col(row, 0, matrix[row].size() - 1, matrix, target);
    }
};
