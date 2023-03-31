class Solution {
public:
    int minMaxDifference(int num) {
        string s1 = to_string(num);
        string s2 = to_string(num);

        // getting the first char out
        char ch1 = s1[0];
        char ch2 = s2[0];

        // if the first char of string isn't 9 we'll store that digit in ch1
        for(int i=0; i<s1.length(); i++) {
            if(s1[i]!='9') {
                ch1 = s1[i];
                break;
            }
        }

        // upon comparing the dig and the stored dig in ch1, if it is equal make the digit as 9 as we need the max number
        for(int i=0; i<s1.length(); i++) {
            if(s1[i] == ch1) {
                s1[i] = '9';
            }
        }

        // upon comparing the dig and the stored dig in ch2, if it is equal make the digit as 0 as we need the min number
        for(int i=0; i<s2.length(); i++) {
            if(s2[i]== ch2) {
                s2[i] = '0';
            }
        }

        // string to int
        int maxi = stoi(s1);
        int mini = stoi(s2);

        return maxi-mini;
    }
};
