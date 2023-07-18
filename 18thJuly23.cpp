/*
Longest Repeating Subsequence
MediumAccuracy: 48.54%Submissions: 103K+Points: 4
POTD July Placement Special : All POTD in the month of July are based on popular interview questions. Solve every day to ace the upcoming Placement Season !

Given string str, find the length of the longest repeating subsequence such that it can be found twice in the given string.

The two identified subsequences A and B can use the same ith character from string str if and only if that ith character has different indices in A and B. For example, A = "xax" and B = "xax" then the index of first "x" must be different in the original string for A and B.

Example 1:

Input:
str = "axxzxy"
Output: 2
Explanation:
The given array with indexes looks like
a x x z x y 
0 1 2 3 4 5

The longest subsequence is "xx". 
It appears twice as explained below.

subsequence A
x x
0 1  <-- index of subsequence A
------
1 2  <-- index of str 


subsequence B
x x
0 1  <-- index of subsequence B
------
2 4  <-- index of str 

We are able to use character 'x' 
(at index 2 in str) in both subsequences
as it appears on index 1 in subsequence A 
and index 0 in subsequence B.

Example 2:

Input:
str = "axxxy"
Output: 2
Explanation:
The given array with indexes looks like
a x x x y 
0 1 2 3 4

The longest subsequence is "xx". 
It appears twice as explained below.

subsequence A
x x
0 1  <-- index of subsequence A
------
1 2  <-- index of str 


subsequence B
x x
0 1  <-- index of subsequence B
------
2 3  <-- index of str 

We are able to use character 'x' 
(at index 2 in str) in both subsequences
as it appears on index 1 in subsequence A 
and index 0 in subsequence B.


Your Task:
You don't need to read or print anything. Your task is to complete the LongestRepeatingSubsequence() which takes str as input parameter and returns the length of the longest repeating subsequnece.


Expected Time Complexity: O(n2)
Expected Space Complexity: O(n2)


Constraints:
1 <= |str| <= 103

*/
/*
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    int func(string &s1, string &s2, int ind1, int ind2, vector<vector<int>> &dp){
        if(ind1==s1.size() || ind2==s2.size()) return 0;
        if(dp[ind1][ind2] != -1) return dp[ind1][ind2];
        if(s1[ind1]==s2[ind2] && ind1 != ind2){
            return dp[ind1][ind2]= 1 + func(s1, s2, ind1+1, ind2+1, dp);
        }
        return dp[ind1][ind2]= max(func(s1,s2,ind1+1, ind2, dp), func(s1,s2, ind1, ind2+1, dp));
    }
	public:
		int LongestRepeatingSubsequence(string str){
		    //variation of longest common subsequence
		    int n=str.size();
		    string s1=str, s2=str;
		    vector<vector<int>> dp(str.size()+1, vector<int>(str.size()+1, 0));
		    
		    for(int ind1=n-1; ind1>=0; ind1--){
		        for(int ind2=n-1; ind2>=0; ind2--){
		            if(s1[ind1]==s2[ind2] && ind1 != ind2){
		                dp[ind1][ind2] = 1 + dp[ind1+1][ind2+1];
		            }
		            else{
		                dp[ind1][ind2] = max(dp[ind1+1][ind2], dp[ind1][ind2+1]);
		            }
		        }
		    }
		    
		    
		    return dp[0][0];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends

*/