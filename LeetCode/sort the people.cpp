class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string, greater<int>> mp;

        for(int i=0;i<heights.size();i++) {
            mp[heights[i]]=names[i];
        }
        int i=0;
        for(auto it: mp) {      
            names[i]=it.second;
            i++;
        }
        return names;
    }
};
