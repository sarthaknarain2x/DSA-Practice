class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int lo=0, hi=n-1, mid;

        while(lo<hi) {

            if(numbers[lo] + numbers[hi] == target) {
                return {lo+1, hi+1};
            }

            else if(numbers[lo] + numbers[hi] > target) {
                hi--;
            }
            else 
                lo++;
        }
        return {};
    }
};
