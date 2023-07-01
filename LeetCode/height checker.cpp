class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        int n = heights.size();
        int c=0;
        vector <int> expected = heights;
        sort(expected.begin(), expected.end());

        for(int i=0; i<n; i++) {
            if(heights[i] != expected[i])
                c++;
        }
        return c;
    }
};
