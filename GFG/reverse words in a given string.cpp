class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        S="."+S;
        int len = S.length();
        string str="", ans="", res="";
        for(int i=len; i>=0; i--) {
            if(S[i] != '.') {
                str += S[i];
            }
            else if(S[i] == '.') {
                reverse(str.begin(), str.end());
                str = str + ".";
                ans += str;
                str = "";
            }
        }
        res = ans.substr(0,len);
        return res;
    } 
};
