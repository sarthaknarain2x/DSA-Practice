class Solution {
    public int vowelStrings(String[] words, int left, int right) {
        String temp = "";
        int len, cnt=0;
        for(int i=left; i<=right; i++) {
            temp = words[i];
            len = temp.length();
            char start = temp.charAt(0);
            char end = temp.charAt(len-1);

            if((start=='a' || start=='e' || start == 'i' || start == 'o' || start == 'u')&&(end=='a' || end=='e' || end == 'i' || end == 'o' || end == 'u'))
            {
                cnt++;
            }
        }
        return cnt;
    }
}
