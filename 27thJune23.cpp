/*
nCr
MediumAccuracy: 14.82%Submissions: 234K+Points: 4

Given two integers n and r, find nCr. Since the answer may be very large, calculate the answer modulo 109+7.

Example 1:

Input: n = 3, r = 2
Output: 3
Explaination: 3C2 = 3. 

Example 2:

Input: n = 2, r = 4
Output: 0
Explaination: r is greater than n.

Your Task:
You do not need to take input or print anything. Your task is to complete the function nCr() which takes n and r as input parameters and returns nCr modulo 109+7..

Expected Time Complexity: O(n*r)
Expected Auxiliary Space: O(r)

Constraints:
1 ≤ n ≤ 1000
1 ≤ r ≤ 800

*/
/*
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int mod = (int)(1e9 + 7);
    int nCr(int n, int r){
        if(r > n){
            return 0;
        }
        vector<int> prev(r+1);
        vector<int> curr(r+1);
        prev[0] = curr[0] = 1;
        curr[1] = 1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=r; j++){
                curr[j] = (prev[j-1] + prev[j]) % mod;
            }
            prev = curr;
        }
        return curr[r];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends

*/