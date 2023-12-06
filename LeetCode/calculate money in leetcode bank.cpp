class Solution {
public:
    int totalMoney(int n) {
        int fullWeeks = n/7;  // no.of full weeks
        // first week  1 2 3 4 5 6 7 (sum is 28 i.e. 7*(i+3) if i=1)
        // second week  2 3 4 5 6 7 8 (sum is 35 i.e. 7*(i+3) if i=2)
        //.... so on
        int ans = 0; 
        // calculating full weeks
        for(int i=1; i<=fullWeeks; i++){
            ans+=7*(i+3);
        }
        // calculating left days
        for(int i=7*fullWeeks;i<n;i++){
            ans += ++fullWeeks;
        }
        return ans;
    }
};
