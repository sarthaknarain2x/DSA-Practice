class Solution {
    public int[] findArray(int[] pref) {
        for(int i = 0; i < pref.size()-1; i++) { 
            pref[i] = pref[i] ^ pref[i+1];
        }
        return pref;
    }
}
