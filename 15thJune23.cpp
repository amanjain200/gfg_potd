/*
Longest Palindrome in a String
MediumAccuracy: 23.2%Submissions: 245K+Points: 4

Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). Palindrome string: A string that reads the same backward. More formally, S is a palindrome if reverse(S) = S. In case of conflict, return the substring which occurs first ( with the least starting index).

Example 1:

Input:
S = "aaaabbaa"
Output: aabbaa
Explanation: The longest Palindromic
substring is "aabbaa".

Example 2:

Input: 
S = "abc"
Output: a
Explanation: "a", "b" and "c" are the 
longest palindromes with same length.
The result is the one with the least
starting index.

Your Task:
You don't need to read input or print anything. Your task is to complete the function longestPalin() which takes the string S as input and returns the longest palindromic substring of S.

Expected Time Complexity: O(|S|2).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ |S| ≤ 103

*/
/*
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        int start = 0, end = 0;
    int low,high;
    for(int i = 0; i < S.length(); i++){
         low = i - 1;
         high = i;
        while(low>=0 && high<S.length() && S[low] == S[high]){
            
            if(high - low + 1 > end){
                end = high - low + 1;
                start = low;
            }
            low--;
            high++;
        }
         low = i - 1;
         high = i + 1;
        while(low>=0 && high<S.length() && S[low] == S[high]){
            
            if(high - low + 1 > end){
                end = high - low + 1; 
                start = low;
            }
            low--;
            high++;
        }
        
    }
    if(end == 0)return S.substr(start,1); 
    return S.substr(start,end);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends

*/