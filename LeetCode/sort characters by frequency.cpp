class Solution {
public:
    string frequencySort(string s) {
        priority_queue <pair<int, char>> maxh;
        unordered_map <int, int> mp;
        string ans;
        for(char ch: s) {
            mp[ch]++;
        }

        for(auto i = mp.begin(); i!=mp.end(); i++) {
            maxh.push({i->second, i->first});
        }
        int i=0;
        while(!maxh.empty()) {
            int freq = maxh.top().first;
            int element = maxh.top().second;
            maxh.pop();
            while(freq > 0) {
                ans.push_back(element);
                freq--;
            }
        }
        return ans;
    }
};
