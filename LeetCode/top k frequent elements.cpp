class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp; // map for frequency
        priority_queue <pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> minh; // min heap
        vector<int> ans;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++; // frequency of elements
        }

        for(auto i= mp.begin(); i!=mp.end(); i++) {
            minh.push({i->second, i->first}); //1-> freq; 2-> elements

            if(minh.size() > k) {
                minh.pop();
            }
        }
        // till heap isn't empty
        while(minh.size() > 0) {
            ans.push_back(minh.top().second); // push elements
            minh.pop(); // empty the heap
        }
        return ans;
    }
};
