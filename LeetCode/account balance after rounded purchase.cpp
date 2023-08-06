class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int a = (purchaseAmount / 10);
        if(purchaseAmount%10 >= 5)
            return(100-(10*(a+1)));
        else 
            return(100-(10*(a))); 
    }
};
