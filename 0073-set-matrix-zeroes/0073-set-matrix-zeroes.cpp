class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rows, cols;
        int m = matrix.size(), n = matrix[0].size();
        for (int row=0; row<m; row++){
            for (int col=0; col<n; col++){
                if (matrix[row][col]==0){
                    rows.insert(row);
                    cols.insert(col);
                }
            }
        }

        for (int row=0; row<m; row++){
            for (int col=0; col<n; col++){
                if (rows.count(row)!=0 || cols.count(col)!=0){
                    matrix[row][col]=0;
                }
            }
        }
    }
};