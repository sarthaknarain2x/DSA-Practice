class Solution {
public:
    string sortSentence(string s) {
        int n = s.size(), c=1;
        string ans="";
        vector<string> str(10, "");
        for(int i=0; i<n; i++) {
            int j = i;
            string temp="";
            while(!isdigit(s[j])){
                temp.push_back(s[j]);
                j++;
            }
            str[s[j]-'0'] = temp;
            i = j+1;
        }
        for(int i=1; i<10; i++){
            if(str[i].length()>0){
                ans+=str[i];
                ans.push_back(' ');
            }
        }
        ans.pop_back();
        return ans;
    }
};
