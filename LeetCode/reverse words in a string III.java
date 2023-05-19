class Solution {
    public String reverseWords(String s) {
        String [] ch = s.split(" ");
        for(int i=0; i<ch.length; i++) {
            ch[i] = new StringBuilder(ch[i]).reverse().toString();
        }
        return String.join(" ", ch);
    }
}
