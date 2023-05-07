class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int i=0, j=0, ans=0; //two pointers i,j. i->players j->trainers
        while(i < players.size() && j < trainers.size()) {
            if(players[i] <= trainers[j]) {
                i++; // increment counter on players
                j++; // increment counter on trainers
                ans++; // condition satisfied, increment ans
            }
            else {
                j++; // if condition not matching increment j only
            }
        }
        return ans;
    }
};
