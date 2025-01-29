/*
Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.

Note: Consider the array as circular.

Examples :

Input: arr[] = [1, 2, 3, 4, 5], d = 2
Output: [3, 4, 5, 1, 2]
Explanation: when rotated by 2 elements, it becomes 3 4 5 1 2.
Input: arr[] = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20], d = 3
Output: [8, 10, 12, 14, 16, 18, 20, 2, 4, 6]
Explanation: when rotated by 3 elements, it becomes 8 10 12 14 16 18 20 2 4 6.
Input: arr[] = [7, 3, 9, 1], d = 9
Output: [3, 9, 1, 7]
Explanation: when we rotate 9 times, we'll get 3 9 1 7 as resultant array.
Constraints:
1 <= arr.size(), d <= 105
0 <= arr[i] <= 105

Company Tags
AmazonMicrosoftMAQ Software
Topic Tags
ArraysData Structures
Related Interview Experiences
Paytm Interview Experience Set 14 For Senior Android Developer
Related Articles
Array RotationComplete Guide On Array RotationsCpp Program For Array RotationJava Program For Array RotationJava Program To Rotate Elements Of The List
Expected Complexities
Time Complexity: O(n)Auxiliary Space: O(1)

*/


class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void reverse(vector<int>&arr, int st, int en)
    {
        while(st<en)
        {
            swap(arr[st],arr[en]);
            st++;
            en--;
        }
    }
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        d=d%n;
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
        
    }
};
