class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size()==2)
            return true;
        sort(arr.begin(), arr.end());
        int diff = abs(arr[1]-arr[0]);
        for(int i=1; i<arr.size()-1; i++) {
            int diff1 = abs(arr[i+1] - arr[i]);
            if(diff != diff1) {
                return false;
            }
        }
        return true;
    }
};
