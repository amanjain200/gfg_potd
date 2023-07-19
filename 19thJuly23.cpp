/*
Longest Palindromic Subsequence
MediumAccuracy: 56.57%Submissions: 65K+Points: 4
POTD July Placement Special : All POTD in the month of July are based on popular interview questions. Solve every day to ace the upcoming Placement Season !

Given a String, find the longest palindromic subsequence.

Example 1:

Input:
S = "bbabcbcab"
Output: 7
Explanation: Subsequence "babcbab" is the
longest subsequence which is also a palindrome.

Example 2:

Input: 
S = "abcd"
Output: 1
Explanation: "a", "b", "c" and "d" are
palindromic and all have a length 1.


Your Task:
You don't need to read input or print anything. Your task is to complete the function longestPalinSubseq() which takes the string S as input and returns an integer denoting the length of the longest palindromic subsequence of S.

Expected Time Complexity: O(|S|*|S|).
Expected Auxiliary Space: O(|S|*|S|).

Constraints:
1 ≤ |S| ≤ 1000
*/
/*
//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    int func(int index1, int index2, string s1, string s2, vector<vector<int>> &dp){
        //base case
        if(index1==s1.size() || index2==s2.size()) return 0;
        if(dp[index1][index2] != -1) return dp[index1][index2];
        if(s1[index1]==s2[index2]) return dp[index1][index2] = 1+func(index1+1, index2+1, s1, s2, dp);
        return dp[index1][index2] = max(func(index1+1, index2, s1, s2, dp), func(index1, index2+1, s1, s2, dp));
    }
  public:
    int longestPalinSubseq(string A) {
        //variation of Longest common subsequence
        vector<vector<int>> dp(A.size(), vector<int>(A.size(), -1));
        string s1 = A;
        reverse(A.begin(), A.end());
        return func(0,0,s1,A, dp);
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
*/