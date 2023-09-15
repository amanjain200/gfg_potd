/*
Partition Equal Subset Sum
MediumAccuracy: 30.24%Submissions: 204K+Points: 4
Learn Google Cloud with Curated Lab Assignments. Register, Earn Rewards, Get noticed by experts at Google & Land your Dream Job! 

Given an array arr[] of size N, check if it can be partitioned into two parts such that the sum of elements in both parts is the same.

Example 1:

Input: N = 4
arr = {1, 5, 11, 5}
Output: YES
Explanation: 
The two parts are {1, 5, 5} and {11}.

Example 2:

Input: N = 3
arr = {1, 3, 5}
Output: NO
Explanation: This array can never be 
partitioned into two such parts.

Your Task:
You do not need to read input or print anything. Your task is to complete the function equalPartition() which takes the value N and the array as input parameters and returns 1 if the partition is possible. Otherwise, returns 0.

Expected Time Complexity: O(N*sum of elements)
Expected Auxiliary Space: O(N*sum of elements)

Constraints:
1 ≤ N ≤ 100
1 ≤ arr[i] ≤ 1000
N*sum of elements ≤ 5*106
*/
/*
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
bool helper(int arr[],int ind,int target,vector<vector<int>>&dp)
    {
        if(target == 0) return true;
        if(ind == 0) return arr[0] == target;
        if(dp[ind][target] != -1) return dp[ind][target];
        
        bool take = false;
        
        if(arr[ind] <= target)
        take = helper(arr,ind-1,target-arr[ind],dp);
        
        bool nottake = false;
        nottake = helper(arr,ind-1,target,dp);
        return dp[ind][target] = (take or nottake);
    }
public:
    int equalPartition(int N, int arr[])
    {
        int sum = 0;
        for(int i=0;i<N;i++) sum += arr[i];
        if(sum%2) return 0;
        int target = sum/2;
        vector<vector<int>>dp(N+1,vector<int>(target+1,-1));
        return helper(arr,N-1,target,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends

*/