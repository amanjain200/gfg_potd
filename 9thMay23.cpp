/*
Count Binary Strings With No Consecutive 1s
HardAccuracy: 65.71%Submissions: 8K+Points: 8
Finding a high paying job is easier than today's problem! Attend Job Fair 2023
 

Given an integer N. Your task is to find the number of binary strings of length N having no consecutive 1s.
As the number can be large, return the answer modulo 10^9+7.

Example 1:

Input:
N = 3
Output:
5
Explanation:
All the binary strings of length 3 having
no consecutive 1s are "000", "001", "101",
"100" and "010".
Example 2:

Input: 
N = 2
Output:
3
Explanation: 
All the binary strings of length 2 having no 
consecutive 1s are "10", "00" and "01".
Your Task:
You dont need to read input or print anything. Complete the function countStrings() which takes the integer N as the input parameter, and returns the number of binary strings of length N with no consecutive 1s.

Expected Time Complexity: O(log(N))
Expected Auxiliary Space: O(Height of the recursive call stack)

Constraints:
1 ≤ N ≤ 1018s
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
    const long M = 1000000007; 
    map<long, long> F;
    long long f(long long n)
    {
        if (F.count(n)) return F[n];
        long k = n / 2;
        if (n % 2 == 0) return F[n] = (f(k) * f(k) + f(k - 1) * f(k - 1)) % M;
        return F[n] = (f(k) * f(k + 1) + f(k - 1) * f(k)) % M;
    }
    int countStrings(long long int N)
    {
        F[0] = 1;
        F[1] = 1;
        return f(N + 1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int N;
        cin >> N;
        Solution obj;
        cout << obj.countStrings(N) << endl;
    }
}
// } Driver Code Ends
*/