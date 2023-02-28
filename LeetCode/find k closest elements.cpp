class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue <pair<int, int>> pq;
        vector<int> ans(k);
        int j=0;
        for(int i=0; i<arr.size(); i++) {
            pq.push(make_pair(abs(arr[i]-x), arr[i]));

            if(pq.size() > k) {
                pq.pop();
            }
        }
        while(!pq.empty()) {
            ans[j++] = pq.top().second;
            pq.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
