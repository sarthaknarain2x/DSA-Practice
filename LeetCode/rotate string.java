class Solution {
    public boolean rotateString(String s, String goal) {
        if(s.length() == goal.length()) {
            String word = s + s;
            int i=0, j=goal.length();
            for(int k=0; k<goal.length(); k++) {
                if((word.substring(i, j)).equals(goal))
                    return true;
                i++;
                j++;
            }
        }
        else
            return false;

        return false; 
    }
}
