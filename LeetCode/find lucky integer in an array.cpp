class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map <int, int> mp;
        int maxi = -1;
        for(int i=0; i<arr.size(); i++)
            mp[arr[i]]++;
        for(auto itr: mp)
            if(itr.first == itr.second) {
                maxi = max(maxi, itr.first);
            }
        return maxi;
    }
};
