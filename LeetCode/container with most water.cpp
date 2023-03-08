class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans =0, area, i=0, j=height.size()-1;
        while(i<j) {
            area = (j-i) * min(height[j], height[i]);
            ans = max(ans, area);
            if(height[j] > height[i])
                i++;
            else
                j--;
        }
        return ans;
    }
};
