/*
Median of the Subarrays
HardAccuracy: 59.22%Submissions: 11K+Points: 8
Register NOW for the latest GFG Job-a-thon: Hiring Challenge !!  

Given an array A[] of N integers and an integer M. The task is to count the number of subarrays which have median M.
Median of an array is defined as below:

1. If N is odd, the median value is the number that is in the middle after sorting the array.
2. if N is even, the median value is the left of the two middle numbers after sorting the array. 

Example 1:

Input:
N = 5, M = 2
A[] = {2, 1, 3, 5, 4}
Output: 
3
Explanation: 
The subarrays which has median equal to M
are [2], [2,1,3] and [2,1,3,5]

Example 2:

Input:
N = 1, M = 1
A[] = {1}
Output: 
1
Explanation: 
The subarrays which has median equal to M
is [1].

Your Task: 
You don't need to read input or print anything. Complete the function countSubarray( ) which takes the integer N , the array A[], and the integer M as input parameters and returns the number of subarays. 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 105
1 ≤ A[] ≤ 105
1 ≤ M ≤ N

*/

#include<iostream>
#include<vector>
using namespace std;

//User function Template for C++
class Solution {
  public:
  long long solve(int n, vector<int> &A, int m)
    {
        vector<int> v((2 * n) + 1);
        long long a = n, b = 0, c = 0;
        v[a]++;
        int x;
        for (int i = 0; i < n; i++)
        {
            x = -1;
            if (A[i] >= m)
            {
                x = 1;
            }
            if (x == -1)
            {
                b -= v[a + x];
            }
            else
            {
                b += v[a];
            }
            a += x;
            c += b;
            v[a]++;
        }
        return c;
    }
    long long countSubarray(int N,vector<int> A,int M) {
        return (solve(N, A, M) - solve(N, A, M + 1));
    }
};