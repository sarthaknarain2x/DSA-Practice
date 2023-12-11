class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int miniSize = arr.size()/4;
        unordered_map<int, int> mp;
        for(int i=0; i<arr.size(); i++) {
            mp[arr[i]]++;
        }

        for(auto itr: mp) {
            if(itr.second>miniSize) {
                return itr.first;
            }
        }
        return 0;
    }
};
