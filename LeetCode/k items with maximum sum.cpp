class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int ans = 0;
        if(k <= numOnes) {
            ans += k; 
        }
        else if(k <= (numOnes + numZeros)) {
            ans += numOnes;
        }
        else if(k>(numOnes+numZeros)) {
            ans = numOnes - (k - numOnes- numZeros); 
        }
        return ans;
    }
};
