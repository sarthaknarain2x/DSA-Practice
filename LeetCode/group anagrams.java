class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<HashMap<Character, Integer>, List<String>> hm = new HashMap<>();

        for(String s: strs) {
            HashMap<Character, Integer> freq = new HashMap<>();
            for(int i=0; i<s.length(); i++) {
                char ch = s.charAt(i);
                freq.put(ch, freq.getOrDefault(ch, 0)+1);
            }

            if(hm.containsKey(freq) == false) {
                List<String> lst = new ArrayList<>();
                lst.add(s);
                hm.put(freq, lst); 
            }
            else {
                List<String> lst = hm.get(freq);
                lst.add(s);
            }
        }
        List<List<String>> ans = new ArrayList<>();
        for(List<String> val: hm.values()) {  // .values is a in-built function
            ans.add(val);
        }
        return ans;
    }
}
