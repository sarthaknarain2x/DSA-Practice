class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> arr;
        for(int i=0; i<s.length(); i++) {
            if(isdigit(s[i])) {
                string temp;
                while(i<s.length() && isdigit(s[i]))
                    temp += s[i++];
                arr.push_back(stoi(temp));
            }
        }
        for(int i=0; i<arr.size()-1; i++) {
            if(arr[i] >= arr[i+1]) {
                return false;
            }
        }
        return true;
    }
};
