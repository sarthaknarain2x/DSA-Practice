class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int ans = (arrivalTime+delayedTime) % 24;
        return ans;
    }
};
