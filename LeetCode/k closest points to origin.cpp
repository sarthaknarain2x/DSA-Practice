class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // 1-> distance | 2 i-> coordinate 1 ; 2 ii-> coordinate 2
        priority_queue<pair<int, pair<int, int>>> maxh; // max heap
        vector<vector<int>> ans(k); // result vector
// since we are calcualting distance of a point from (0,0), that distance instead of using euclidean distance formula could be modified into (x^2 + y^2). Think it!!
        for(int i=0; i<points.size(); i++) {
            maxh.push({points[i][0] * points[i][0] +
            points[i][1] * points[i][1], {points[i][0], points[i][1]}});

            if(maxh.size() > k) { // if size becomes more than k
                maxh.pop(); // pop the top elements
            }
        }
        // removing elements from heap till it gets empty
        for(int i=0; i<k; i++) {
            int c1 = maxh.top().second.first; // first coordinate
            int c2 = maxh.top().second.second; // second coordinate
            ans[i] = {c1, c2}; // pushing in our ans vector
            maxh.pop(); // popping the top elements of heap
        }
        return ans;
    }
};
