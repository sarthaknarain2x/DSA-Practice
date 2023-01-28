//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    // Driver code
    public static void main(String[] args) throws Exception {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            String[] str = br.readLine().trim().split(" ");
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = Integer.parseInt(str[i]);
            }

            int ans = new Solution().findKRotation(a, n);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    int findKRotation(int arr[], int n) {
        // code here
        int low = 0, high = n - 1;
        if (arr[low] <= arr[high])
            return 0;
        /*returns 0 if array is already sorted*/
        while (low <= high) {
            // if first element is mid or
            // last element is mid
            // then simply use modulo so it
            // never goes out of bound.
            int mid = low + (high - low) / 2;
            int prev = (mid - 1 + n) % n;
            int next = (mid + 1) % n;
     
            if (arr[mid] <= arr[prev] && arr[mid] <= arr[next])
                return mid;
            else if (arr[mid] <= arr[high])
                high = mid - 1;
            else if (arr[mid] >= arr[0])
                low = mid + 1;
        }
    return 0;
    }
}
