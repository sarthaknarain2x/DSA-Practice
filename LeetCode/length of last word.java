class Solution {
    public int lengthOfLastWord(String s) {
        s = s.trim();
        if(s.length()==1){
            return 1;
        }
        int c=0; String str="";
        int len = s.length();
        for(int i=len-1; i>=0; i--) {
            c++;
            if(s.charAt(i)==' '){
                str = s.substring(len-c+1, len);
                int ans = str.length();
                return ans; 
            }
        }
        return len;  
    }
}
