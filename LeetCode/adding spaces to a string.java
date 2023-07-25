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
