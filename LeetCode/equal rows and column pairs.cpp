class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map <vector<int>, int> mp;
        int row = grid.size();
        int col = grid[0].size();
        int c=0;

        // storing rows in map
        for(int i=0; i<row; i++) {
            mp[grid[i]]++;
        }

        // getting columns in vector
        for(int i=0; i<col; i++) {
            vector <int> v;
            for(int j=0; j<row; j++)
                v.push_back(grid[j][i]);
        // now find this vector of columns in map of rows
        c += mp[v];
        }
        return c;
    }
};
