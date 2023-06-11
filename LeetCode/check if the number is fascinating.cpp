class Solution {
public:
    bool isFascinating(int n) {
        string str = to_string(n) + to_string(n*2) + to_string(n*3);
        set <char> s(str.begin(), str.end());
        if(s.size()==9 && str.size()==9 && s.find('0') == s.end())
            return true;
        else
            return false;
    }
};

// class Solution {
// public:
//     bool isFascinating(int n) {
//         return n == 192 || n == 219 || n==273 || n==327;
//     }
// };
