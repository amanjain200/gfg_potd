/*
Divide in Incremental Groups
HardAccuracy: 68.73%Submissions: 10K+Points: 8
Lamp
You can earn more Geekbits by participating in GFG Weekly Coding Contest  

Given two integers N and K, the task is to count the number of ways to divide N into K groups of positive integers such that their sum is N and the number of elements in groups follows a non-decreasing order (i.e. group[i] <= group[i+1]).

Example 1:

Input:
N = 8
K = 4
Output:
5
Explanation:
There are 5 groups such that their sum is 8 
and the number of positive integers in each 
group is 4. The 5 groups are [1, 1, 1, 5], 
[1, 1, 2, 4], [1, 1, 3, 3], [1, 2, 2, 3] and 
[2, 2, 2, 2].
Example 2:

Input: 
N = 4
K = 3
Output:
1
Explanation: 
The only possible grouping is {1, 1, 2}. Hence,
the answer is 1 in this case.
Your Task:
Complete the function countWaystoDivide() which takes the integers N and K as the input parameters, and returns the number of ways to divide the sum N into K groups.

Expected Time Complexity: O(N2*K)
Expected Auxiliary Space: O(N2*K)

Constraints:
1 ≤ K ≤ N ≤ 100

*/

/*
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  map<string,int> mp;
    int dp[102][102][102];
    int mx=0;
    
    int func(int n,int k,int prev){
        if (k==0 && n==0){
            return 1;
        }
        else if (k==0 || n==0){
            return 0;
        }
        
        
        if (dp[n][k][prev]!=-1){
            return dp[n][k][prev];
        }
        
        int ans=0;
        
        for (int i=prev; i<=n; i++){
            ans+=func(n-i,k-1,i);
        }
     
       
     return dp[n][k][prev]=ans;
    }
    int countWaystoDivide(int N, int K) {
        memset(dp,-1,sizeof(dp));
      return  func(N,K,1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        Solution ob;
        cout << ob.countWaystoDivide(N, K) << endl;
    }
}
// } Driver Code Ends
*/