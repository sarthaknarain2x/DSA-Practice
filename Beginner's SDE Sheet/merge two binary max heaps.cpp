class Solution{
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int> ans;
        priority_queue <int> pq;
        
        for(int i=0; i<n; i++)
            pq.push(a[i]);
        for(int j=0; j<m; j++)
            pq.push(b[j]);
            
        for(int k=0; k<(m+n); k++) {
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};
