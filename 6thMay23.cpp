/*
Another Coin Change Problem
MediumAccuracy: 74.19%Submissions: 5K+Points: 4
Finding A Job Is Now Easier Than Today's Problem! Explore Job Fair 2023 

Given three integers n, k, target, and an array of coins of size n. Find if it is possible to make a change of target cents by using an infinite supply of each coin but the total number of coins used must be exactly equal to k.

Example 1:

Input:
n = 5, k = 3, target = 11
coins = {1, 10, 5, 8, 6}

Output: 
1

Explanation: 
2 coins of 5 and 1 coins of 1 can be used 
to make change of 11 i.e. 11 => 5+5+1.
Example 2:

Input:
n = 3, k = 5, target = 25
coins = {7, 2, 4}

Output:
1

Explanation:
3 coins 7, 2 coins of 2 can be used to
make change of 25 i.e. 25 => 7+7+7+2+2.
Your Task:
This is a function problem. You only need to complete the function makeChanges() that 3 integers n, k, target, and an array coins as parameters and return True or False.

Expected Time Complexity: O(n*k*target)
Expected Space Complexity: O(k*target)

Constraints:
1 <= n, k, coins[i] <= 100
1 <= target <= 1000

*/

/*
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    bool solve(vector<vector<int>>&dp,int n,int i,int k,int target,vector<int>&coins){
        if(target==0 && k==0){
            return true;
        }
        
        if(i==coins.size() || k<0){
            return false;
        }
        
        if(dp[k][target] != -1){
            return dp[k][target];
        }
        
        bool notTake=solve(dp,n,i+1,k,target,coins);
        bool take=false;
        if(target>=coins[i]){
            take=solve(dp,n,i,k-1,target-coins[i],coins);
        }
        return dp[k][target] = take||notTake;
        
    }
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        vector<vector<int>> dp(K+1, vector<int> (target+1,-1));
        
        return solve(dp,N,0,K,target,coins);
    }
    
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int N;
        scanf("%d", &N);

        int K;
        scanf("%d", &K);

        int target;
        scanf("%d", &target);

        vector<int> coins(N);
        Array::input(coins, N);

        Solution obj;
        bool res = obj.makeChanges(N, K, target, coins);

        cout << res << endl;
    }
}

// } Driver Code Ends
*/