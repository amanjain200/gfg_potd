/*
Reverse Coding
EasyAccuracy: 61.45%Submissions: 56K+Points: 2
Applying for a job now easier than today's problem! Apply for Mega Job-A-Thon  

You will be given an integer n, your task is to return the sum of all natural number less than or equal to n.

As the answer could be very large, return answer modulo 109+7.

Example 1:

Input:
n = 6
Output:
21
Explanation:
1+2+3+4+5+6 = 21

Example 2:

Input:
n = 4
Output:
10
Explanation:
1+2+3+4 = 10

Your Task:
You don't need to read input or print anything. Your task is to complete the function sumOfNaturals() which takes a single integer n as input and returns sum of all numbers x upto n, i.e., 1 <= x <= n.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
0 <= n <= 107
*/
/*

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    int mod = (1e9+7);
  public:
    int sumOfNaturals(int n) {
        long long a = n;
        long long ans = ((a)*(a+1))/2;
        return ans%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.sumOfNaturals(n) << endl;
    }
    return 0;
}
// } Driver Code Ends
*/