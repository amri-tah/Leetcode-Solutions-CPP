class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() - 1, n = matrix[0].size() - 1;
        int top = 0, bottom = m, left = 0, right = n;
        while (top <= bottom) {
            int midRow = (top + bottom) / 2;
            if (matrix[midRow][0] <= target && matrix[midRow][n] >= target) {
                while (left <= right) {
                    int mid = (left + right) / 2;
                    if (matrix[midRow][mid] == target)
                        return true;
                    else if (matrix[midRow][mid] > target)
                        right = mid - 1;
                    else
                        left = mid + 1;
                }
                return false;
            } else if (matrix[midRow][0] > target)
                bottom = midRow - 1;
            else
                top = midRow + 1;
        }
        return false;
    }
};