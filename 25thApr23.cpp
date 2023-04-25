/*
Game Of Subsets
HardAccuracy: 74.15%Submissions: 8K+Points: 8
Explore Job Fair for students & freshers for daily new opportunities. Find A Job Today! 

Elena is the topper of the class. Once her teacher asked her a problem. He gave Elena an array of integers of length n. He calls a subset of array arr good if its product can be represented as a product of one or more distinct prime numbers. He asked her to find the number of different good subsets in arr modulo 109 + 7.

As a good friend of Elena help her to solve the problem.

Example 1:

Input:
N: 4
arr: {1,2,3,4}
Output: 6
Explanation: 
The good subsets are:
- [1,2]: product is 2, which is the product of distinct
prime 2.
- [1,2,3]: product is 6, which is the product of 
distinct primes 2 and 3.
- [1,3]: product is 3, which is the product of distinct
prime 3.
- [2]: product is 2, which is the product of distinct
 prime 2.
- [2,3]: product is 6, which is the product of distinct
primes 2 and 3.
- [3]: product is 3, which is the product of distinct
prime 3.
Example 2:

Input:
N : 3
arr : {2, 2, 3}
Output: 5
Explanantion:
The good subsets are : {2}, {2}, {2, 3}, {2, 3}, {3}
Your Task:
The task is to complete the function goodSubsets() which takes an integer n and an array arr as the input parameters and should return the number of different good subsets.

Expected Time Complexity: O(NlogN)
Expected Space Complexity: O(N)

Constraints:

1 <= N <= 105
1< = arr[i] <= 30
*/

/*
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int goodSubsets(vector<int> &arr, int n){
        long long mod = 1e9 + 7;
    vector<int> cnt(31, 0);
    int primes[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int maskSize = 1<<10;
    for(int x : arr) cnt[x]++;
    long long dp[31][maskSize];
    dp[0][0] = 1; 
    for(int j = 1; j < maskSize; j++) dp[0][j] = 0;
    for(int i = 1; i <= 30; i++) {
        int mask = 0;
        bool canBeUsed = true;
        for(int j = 0; j < 10; j++) {
            int p = primes[j];
            if(i%p == 0 && i%(p*p) == 0) {
                canBeUsed = false;
                break;
            }
            if(i%p == 0) mask |= (1 << j);
        }
        for(int j = 0; j < maskSize; j++) {
            long long subsets = dp[i-1][j];
            if(canBeUsed && (j&mask) == mask) subsets = (subsets + (cnt[i] * dp[i-1][j&(~mask)]) % mod) % mod;
            dp[i][j] = subsets;
        }
    }
    long long ans = 0;
    for(int mask = 1; mask < maskSize; mask++) ans = (ans + dp[30][mask]) % mod;
    return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        cout<<ob.goodSubsets(a, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends
*/