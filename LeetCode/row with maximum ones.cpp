class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int count =0, maxRow, maxCount = INT_MIN;
        int row = mat.size();
        int col = mat[0].size();

        for(int i=0; i<row; i++) {
            count = 0;
            for(int j=0; j<col; j++) {
                if(mat[i][j] == 1) {
                    count++;
                }
                if(count > maxCount) {
                    maxCount = count;
                    maxRow = i;
                }
            }
        }
        return {maxRow, maxCount};
    }
};
