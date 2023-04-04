class Solution {
    public int partitionString(String s) {
        HashSet<Character> hm = new HashSet<Character>();
        int c=0;
        for(int i=0; i<s.length(); i++) {
            if(hm.contains(s.charAt(i))) {
                hm.clear();
                c++;
            }
            hm.add(s.charAt(i));
        }
        return c+1;
    }
}
