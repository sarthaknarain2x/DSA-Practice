class Solution {
public:
    int secondHighest(string s) {
        vector<int> v;
        for(int i=0; i<s.size(); i++) {
            if(isdigit(s[i])) {
                v.push_back(s[i]-'0');
            }
        }
        set<int> st;
        for(int i=0; i<v.size(); i++){
            st.insert(v[i]);
        }
        vector<int> nums;
        for(auto num :st) {
            nums.push_back(num);
        }
        if(nums.size() < 2) 
            return -1;
        return nums[nums.size()-2];
    }
};
