/*
Given an array of integers arr[] in a circular fashion. Find the maximum subarray sum that we can get if we assume the array to be circular.

Examples:

Input: arr[] = [8, -8, 9, -9, 10, -11, 12]
Output: 22
Explanation: Starting from the last element of the array, i.e, 12, and moving in a circular fashion, we have max subarray as 12, 8, -8, 9, -9, 10, which gives maximum sum as 22.
Input: arr[] = [10, -3, -4, 7, 6, 5, -4, -1]
Output: 23
Explanation: Maximum sum of the circular subarray is 23. The subarray is [7, 6, 5, -4, -1, 10].
Input: arr[] = [-1, 40, -14, 7, 6, 5, -4, -1] 
Output: 52
Explanation: Circular Subarray [7, 6, 5, -4, -1, -1, 40] has the maximum sum, which is 52.
Constraints:
1 <= arr.size() <= 105
-104 <= arr[i] <= 104

Company Tags
AmazonMicrosoft
Topic Tags
ArraysData Structures
Related Articles
Maximum Contiguous Circular Sum
Expected Complexities
Time Complexity: O(n)Auxiliary Space: O(1)
*/
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        // your code here
        int ps=0;
        int mxs=INT_MIN;
        int sm=0;
        for(auto i:arr)
        {
            sm+=i;
            ps+=i;mxs=max(mxs,sm);
            sm=max(sm,0);
        }
        sm=0;
        for(auto i:arr)
        {
            sm+=i;
            sm=min(sm,0);
            mxs=max(mxs,ps-sm);
        }
        return mxs;
    }
};
