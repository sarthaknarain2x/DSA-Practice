class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int> s2;
        vector<vector<int>> res {{}, {}};

        for(auto i: nums1) {
            s1.insert(i);
        }

        for(auto j: nums2) {
            s2.insert(j);
        }

        for(auto itr: s1) {
            if(s2.count(itr) == 0) {
                res[0].push_back(itr);
            }
        }

        for(auto itr: s2) {
            if(s1.count(itr) == 0) {
                res[1].push_back(itr);
            }
        }
        return res;
    }
};
