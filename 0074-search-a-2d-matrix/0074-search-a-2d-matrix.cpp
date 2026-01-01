class Solution {
public:
    bool searchInRow(vector<vector<int>>& matrix, int target, int row) {
        int n = matrix[0].size();
        int st = 0;
        int end = n - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (target == matrix[row][mid]) {
                return true;
            } else if (target > matrix[row][mid]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // appraoch 1 = in this approach go in each row and then apply binary
        // search

        // for(int i =0 ; i < matrix.size();i++){
        //     int st = 0;
        //     int end = matrix[i].size()-1;
        //     while(st<=end){
        //         int mid = st + (end-st)/2;
        //         if(target == matrix[i][mid]){
        //             return true;
        //         }else if( target  > matrix[i][mid]){
        //             st= mid+1;
        //         }else{
        //             end = mid-1;
        //         }
        //     }
        // }
        // return false;

        // appraoch 2 = in this if we find in which row the target is present
        // and in that row we apply binary search
        int m = matrix.size();
        int n = matrix[0].size();
        int stRow = 0;
        int endRow = m - 1;
        while (stRow <= endRow) {
            int midRow = stRow + (endRow - stRow) / 2;
            if (target >= matrix[midRow][0] &&
                target <= matrix[midRow][n - 1]) {
                // search in this row
                return searchInRow(matrix, target, midRow);
            } else if (target > matrix[midRow][n - 1]) {
                stRow = midRow + 1;
            } else {
                endRow = midRow - 1;
            }
        }
        return false;
    }
};