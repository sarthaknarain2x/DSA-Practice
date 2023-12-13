class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        int cnt=0;
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                if(mat[i][j] == 0) {
                    continue;
                }
                int flag=1;
                for(int c=0; c<col; c++) {
                    if(c!=j && mat[i][c] == 1) {
                        flag = 0;
                        break;
                    }
                }

                for(int r=0; r<row; r++) {
                    if(r!=i && mat[r][j] == 1) {
                        flag = 0;
                        break;
                    }
                }

                if(flag == 1) {
                    cnt++;
                }
            } 
        }
        return cnt;
    }
};
