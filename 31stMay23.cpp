/*
Frequency Game
EasyAccuracy: 62.74%Submissions: 19K+Points: 2
Given an array A of size N. The elements of the array consist of positive integers. You have to find the largest element with minimum frequency.

Example 1:

Input: 
5
2 2 5 50 1
Output:
50
Explanation :
All elements are having frequency 1 except 2.
50 is the maximum element with minimum frequency.
Example 2:

Input:
4
3 3 5 5
Output:
5
Explanation:
Both 3 and 5 have the same frequency, so 5 should be returned.
User Task:
Your task is to complete the provided function LargButMinFreq(A, n) which accepts array A and n. Hence you have to return the largest element with minimum frequency.

Expected Time Complexity: O(N)
Expected Space Complexity: O(N)

Constraints:
1 <= N <= 105
1 <= A[i] <= 106
*/
/*
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        map<int, int> freq;
        for(int i = 0; i<n; i++){
            freq[arr[i]]++;
        }
        int minFreq = n+1;
        int ans = 1e9;
        for(auto it : freq){
            if(it.second<minFreq){
                minFreq = it.second;
                ans = it.first;
            }
            else if(it.second == minFreq){
                if(it.first > ans) ans = it.first;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends
*/