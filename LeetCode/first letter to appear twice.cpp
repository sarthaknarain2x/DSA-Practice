class Solution {
public:
    char repeatedCharacter(string s) {
        char ans;
        unordered_map<char,bool>visited;
        for(int i=0;i<s.length();i++) {
            if(visited[s[i]]==true) {
                return s[i];
            }
            visited[s[i]]=true;
        }
        return 'a';
    }
};
