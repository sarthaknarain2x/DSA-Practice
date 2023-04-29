class Solution {
public:
    int getReverse(int num) {
        int d, rev=0;
        while(num>0) {
            d = num%10;
            rev = rev*10+d;
            num = num/10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set <int> visited;
        for(int num: nums) {
            visited.insert(num);
            visited.insert(getReverse(num));
        }
        return size(visited);
    }
};
