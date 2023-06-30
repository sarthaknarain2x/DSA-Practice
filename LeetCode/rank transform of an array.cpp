class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector <int> temp = arr;
        vector<int> ans(arr.size());
        int c=1;
        unordered_map <int, int> mp;
        sort(temp.begin(), temp.end());

        for(auto &itr: temp) {
            if(mp.find(itr) == mp.end()) {
                mp[itr] = c++;
            }
        }

        for(int i=0; i<arr.size(); i++) {
            ans[i] = mp[arr[i]];
        }
        return ans;
    }
};
