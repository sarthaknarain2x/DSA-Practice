class Solution {
    public boolean isIsomorphic(String s, String t) {
        if(s.length() != t.length()) 
            return false;
        
        HashMap <Character, Character> hm1 = new HashMap<>();
        HashMap <Character, Boolean> hm2 = new HashMap<>();

        for(int i=0; i<s.length(); i++) {
            char ch1 = s.charAt(i);
            char ch2 = t.charAt(i);

            if(hm1.containsKey(ch1)==true) {
                if(hm1.get(ch1) != ch2)
                    return false;
            }
            else {
                if(hm2.containsKey(ch2) == true)
                    return false;
                else {
                    hm1.put(ch1, ch2);
                    hm2.put(ch2, true);
                }
            }
        }
        return true;
    }
}
