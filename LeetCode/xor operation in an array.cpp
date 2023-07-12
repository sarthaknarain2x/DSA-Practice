class Solution {
public:
    int xorOperation(int n, int start) {
        int xoro=0;
        vector<int> nums;
        for(int i=0; i<n; i++) {
            nums.push_back(start + (2*i));
        }

        for(auto itr: nums) {
            xoro = xoro ^ itr;
        }
        return xoro;
    }
};
