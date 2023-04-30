class Solution {
public:
    string removeStars(string s) {
        string str;
        for(auto i: s) {
            if(i!= '*') {
                str.push_back(i);
            }
            else {
                str.pop_back();
            }
        }
        return str;
    }
};
