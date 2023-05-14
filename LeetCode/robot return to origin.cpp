class Solution {
public:
    bool judgeCircle(string moves) {
        int a=0, b=0;
        for(int i=0; i<moves.length(); i++) {
            if(moves[i] == 'U') 
                a++;
            else if(moves[i] == 'D')
                a--;
            else if(moves[i] == 'L') 
                b++;
            else
                b--;
        }
        return (a==0 && b==0);
    }
};
