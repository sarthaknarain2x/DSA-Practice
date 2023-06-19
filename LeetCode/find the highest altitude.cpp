class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector <int> sum(n+1);
        sum[0] = gain[0];
        for(int i=1; i<n; i++) {
            sum[i] = sum[i-1] + gain[i];
        }
        sort(sum.begin(), sum.end());
        return sum[n];
    }
};
