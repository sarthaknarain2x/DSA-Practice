class Solution {
public:
    int distinctIntegers(int n) {
        if(n==1)
            return n;
        int temp = n;
        set <int> s;
        while(n--) {
            for(int i=1; i<=temp; i++) {
                if(n%i == 1) {
                    s.insert(i);
                }
            }
        }
        return s.size();
    }
};
