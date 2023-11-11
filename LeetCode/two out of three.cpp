class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans;
        set<int> s1;
        set<int> s2;
        set<int> s3;
        map<int, int> mp;

        for(auto it: nums1) {
            s1.insert(it);
        }
        for(auto it: nums2) {
            s2.insert(it);
        }
        for(auto it: nums3) {
            s3.insert(it);
        }
        
        for(auto it: s1) {
            mp[it] += 1;
        }
        for(auto it: s2) {
            mp[it] += 1;
        }
        for(auto it: s3) {
            mp[it] += 1;
        }

        for(auto itr: mp) {
            if(itr.second>=2) {
                ans.push_back(itr.first);
            }
        }
        return ans;
    }
};
