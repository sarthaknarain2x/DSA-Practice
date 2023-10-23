class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int n = releaseTimes.size(), keyPress, maxi = releaseTimes[0];
        char largestKey = keysPressed[0];
        for(int i=1; i<n; i++) {
            keyPress = releaseTimes[i] - releaseTimes[i-1];
            if(keyPress > maxi || (keyPress == maxi && largestKey < keysPressed[i])) {
                maxi = keyPress;
                largestKey = keysPressed[i];
            }
        }
        return largestKey;
    }
};
