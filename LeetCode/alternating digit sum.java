class Solution {
    public int alternateDigitSum(int n) {
        int sum=0;
        String s = String.valueOf(n);
        char[] arr = s.toCharArray();
        for(int i=0; i<arr.length; i++) {
            if(i%2==0) {
                sum += Character.getNumericValue(arr[i]);
            }
            else {
                sum -= Character.getNumericValue(arr[i]);
            }
        }
        return sum;
    }
}
