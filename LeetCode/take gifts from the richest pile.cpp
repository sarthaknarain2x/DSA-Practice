class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        priority_queue <long long> pq;
        long long ans = 0;
        
        for(auto i: gifts) {
            pq.push(i);
        }

        while(k--) {
            pq.push(sqrt(pq.top()));
            pq.pop();
        }

        while(!pq.empty()) {
            ans = ans + pq.top();
            pq.pop();
        }
        return ans;
    }
};
