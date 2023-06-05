class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        int xmove=coordinates[1][0]-coordinates[0][0]; 
        int ymove=coordinates[1][1]-coordinates[0][1]; 

        for(int i=1;i<n;i++){
            int x=coordinates[i][0]-coordinates[i-1][0];
            int y=coordinates[i][1]-coordinates[i-1][1];
            if(y*xmove!=x*ymove) 
                return false;
        } 
        return true;  
    }
};
