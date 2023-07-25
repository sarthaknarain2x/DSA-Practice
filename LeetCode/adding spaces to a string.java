class Solution {
    public String addSpaces(String s, int[] spaces) {
        int len = s.length();
        char ch;
        StringBuilder str = new StringBuilder();
        int i, j=0;
        for(i=0; i<len; i++) {
            ch = s.charAt(i);
            if(j<spaces.length && i==spaces[j]) {
                str.append(' ');
                j++;
            }
            str.append(ch);
        }
        return str.toString();
    }
}

// CPP Code for the same->

// class Solution {
// public:
//     string addSpaces(string s, vector<int>& spaces) {
//         string str = "";
//         int len = s.length();
//         int i, j=0;
//         for(i=0; i<len; i++) {
//             if(j<spaces.size() && i==spaces[j]) {
//                 str += ' ';
//                 j++;
//             }
//             str += s[i];
//         }
//         return str;
//     }
// };
