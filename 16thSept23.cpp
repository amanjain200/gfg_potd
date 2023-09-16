/*
Count number of hops
EasyAccuracy: 43.93%Submissions: 118K+Points: 2
Learn Google Cloud with Curated Lab Assignments. Register, Earn Rewards, Get noticed by experts at Google & Land your Dream Job! 

A frog jumps either 1, 2, or 3 steps to go to the top. In how many ways can it reach the top of Nth step. As the answer will be large find the answer modulo 1000000007.

Example 1:

Input:
N = 1
Output: 1

Example 2:

Input:
N = 4
Output: 7
Explanation:Below are the 7 ways to reach
4
1 step + 1 step + 1 step + 1 step
1 step + 2 step + 1 step
2 step + 1 step + 1 step
1 step + 1 step + 2 step
2 step + 2 step
3 step + 1 step
1 step + 3 step

Your Task:
Your task is to complete the function countWays() which takes 1 argument(N) and returns the answer%(10^9 + 7).

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 105
*/
/*
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    int mod = 1000000007;
    long long func(int n, vector<long long> &dp){
        
        if(n<0) return 0;
        if(n==0) return 1;
        
        if(dp[n] != -1) return dp[n];
        
        long long one = func(n-1, dp)%mod;
        long long two = func(n-2, dp)%mod;
        long long three = func(n-3, dp)%mod;
        
        return dp[n] = (one+two+three)%mod;
        
    }
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
       // memset(dp, -1, sizeof(dp));
       vector<long long> dp(100001, -1);
        long long ans = func(n, dp);
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends


*/