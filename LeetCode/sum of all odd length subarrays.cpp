class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = accumulate(arr.begin(), arr.end(), 0);

        for(int i=0; i<n; i++) {
            for(int j=i+2; j<n; j=j+2) {
                for(int k=i; k<=j; k++) {
                    sum += arr[k];
                }
            }
        }
        return sum;
    }
};
