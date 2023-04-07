class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int, int> mp;
        int c=0, sum=0;
        for(auto itr: banned) {
            mp[itr]++;
        }

        for(int i=1; i<=n; i++) {
            if(mp.find(i) == mp.end()) {
                c++;
                sum += i;
            }
            if(sum>maxSum) {
                return c-1;
            } 
        }
        return c;
    }
};
