class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int sum = 0;
        sum += prices[0];
        if(sum <= money-prices[1]) {
            sum += prices[1];
            money = money-sum;
        }
        return money;
    }
};
