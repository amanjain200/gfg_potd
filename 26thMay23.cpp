/*
Express as sum of power of natural numbers
MediumAccuracy: 35.28%Submissions: 10K+Points: 4
Lamp
You can earn more Geekbits by participating in GFG Weekly Coding Contest  

Given two numbers n and x, find out the total number of ways n can be expressed as the sum of the Xth power of unique natural numbers. As the total number of ways can be very large, so return the number of ways modulo 109 + 7. 

Example 1:

Input: 
n = 10, x = 2
Output: 
1 
Explanation: 
10 = 12 + 32, Hence total 1 possibility. 
Example 2:

Input: 
n = 100, x = 2
Output: 
3
Explanation: 
100 = 102 
62 + 82 and 12 + 32 + 42 + 52 + 72 
Hence total 3 possibilities. 
Your Task:  
You don't need to read input or print anything. Complete the function numOfWays() which takes n and x as input parameters and returns the total number of ways n can be expressed as the sum of xth power of unique natural numbers.

Expected Time Complexity: O(n2logn)
Expected Auxiliary Space: O(n)

Constraints:
1 <= n <= 103
1 <= x <= 5

*/

/*
//{ Driver Code Starts
// Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
     int mod=1e9+7;
    int solve(int n,int x, int i,int max, vector<vector<long long>>&dp){
        //base conditions
        if(n==0)return 1;
        if(i>max)return 0;
        if(n<0)return 0;
        
        // checking if its done previosly or not
        if(dp[n][i]!=-1)return dp[n][i];
        long long int t=pow(i,x);
        
        int pick=solve(n-t,x,i+1,max,dp);
        int not_pick=solve(n,x,i+1,max,dp);
           return  dp[n][i]=(pick+not_pick)%mod;
    }
    
    int numOfWays(int n, int x)
    {
        int maxLimit=pow(n,1.0/x);
        vector<vector<long long>> dp(n+1,vector<long long>(maxLimit+1,-1));
        return solve(n,x,1,maxLimit,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}

// } Driver Code Ends

*/