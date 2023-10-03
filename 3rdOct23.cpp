/*
Column name from a given column number
MediumAccuracy: 32.41%Submissions: 62K+Points: 4

Win 2X Geekbits, Get on the Leaderboard & Top the Coding Charts! Register for GFG Weekly Coding Contest
banner

Given a positive integer, return its corresponding column title as appear in an Excel sheet.
Excel columns has a pattern like A, B, C, … ,Z, AA, AB, AC,…. ,AZ, BA, BB, … ZZ, AAA, AAB ….. etc. In other words, column 1 is named as “A”, column 2 as “B”, column 27 as “AA” and so on.

Example 1:

Input:
N = 28
Output: AB
Explanation: 1 to 26 are A to Z.
Then, 27 is AA and 28 = AB.

Example 2:

Input: 
N = 13
Output: M
Explanation: M is the 13th character of
alphabet.

Your Task:
You don't need to read input or print anything. Your task is to complete the function colName() which takes the column number N as input and returns the column name represented as a string.
Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 1018
*/
/*
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        string ans;
        while(n){
            long long int temp = (n-1)%26;
            char ch = 'A'+ temp;
            ans = ch + ans;
            if(n==26)
                break;
            n = (n-1)/26;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends

*/