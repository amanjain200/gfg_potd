/*
Total Decoding Messages
MediumAccuracy: 15.79%Submissions: 109K+Points: 4 

A top secret message containing letters from A-Z is being encoded to numbers using the following mapping:

'A' -> 1
'B' -> 2
...
'Z' -> 26
You are an FBI agent. You have to determine the total number of ways that message can be decoded, as the answer can be large return the answer modulo 109 + 7.
Note: An empty digit sequence is considered to have one decoding. It may be assumed that the input contains valid digits from 0 to 9 and If there are leading 0s, extra trailing 0s and two or more consecutive 0s then it is an invalid string.

Example 1:

Input: str = "123"
Output: 3
Explanation: "123" can be decoded as "ABC"(123),
"LC"(12 3) and "AW"(1 23).
Example 2:

Input: str = "90"
Output: 0
Explanation: "90" cannot be decoded as it's an invalid string and we cannot decode '0'.
 

Your Task:
You don't need to read or print anything. Your task is to complete the function CountWays() which takes the string as str as input parameter and returns the total number of ways the string can be decoded modulo 109 + 7.
 

Expected Time Complexity: O(n)
Expected Space Complexity: O(n) where n  = |str|

Constraints:
1 <= |str| <= 104

*/


#include<iostream>
#include<vector>
using namespace std;

class Solution {
	public:
		int CountWays(string str){
		    int mod = 1000000007;
		    int n = str.size();
		    vector<int>dp(n + 1);
		    dp[n] = 1;
		    for(int i = n - 1; i >= 0; i--){
		        if(str[i] == '0')
		            continue;
		        dp[i] = dp[i + 1];
		        if(i + 1 < n){
		            int nextnum = (str[i] - '0') * 10 + (str[i + 1] - '0');
		            if(nextnum <= 26)
		                dp[i] = (dp[i] + dp[i + 2]) % mod;
		        }
		    }
		    return dp[0];
		}

};