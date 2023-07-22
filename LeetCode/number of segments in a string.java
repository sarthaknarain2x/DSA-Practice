class Solution {
    public int countSegments(String s) {
        if(s.length() == 0)
            return 0;
        s = s.trim();
        s = " "+s;
        char ch, prev;
        int c=0;
        int len = s.length();
        for(int i=1; i<len; i++) {
            prev = s.charAt(i-1);
            ch = s.charAt(i);
            if(prev == ' ' && ch != ' ') {
                c++;
            }
        }
        return c;
    }
}
