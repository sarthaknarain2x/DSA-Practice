class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int row = grid[0].size();
        int col = grid.size();

        int ans=0, maxi=0;

        for(int i=0; i<row; i++) {
            sort(grid[i].begin(), grid[i].end());
        }

        for(int i=0; i<col; i++) {
            for(int j=i; j<row; j++) {
                maxi = max(maxi, grid[j][i]);
            }
            ans += maxi;
        }
        return ans;
    }
}
