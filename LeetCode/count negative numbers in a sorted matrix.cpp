class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size();
        int columns = grid[0].size();
        int neg=0;
        for(int i=0; i<rows; i++) {
            for(int j=0; j<columns; j++) {
                if(grid[i][j] < 0) {
                    neg++;
                }
            }
        }
        return neg;
    }
};
