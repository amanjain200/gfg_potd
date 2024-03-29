/*
Minimum Integer
EasyAccuracy: 15.68%Submissions: 51+Points: 2
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

You are given an array A of size N. Let us denote S as the sum of all integers present in the array. Among all integers present in the array, find the minimum integer X such that S ≤ N*X.

Example 1:

Input:
N = 3,
A = { 1, 3, 2}
Output:
2
Explanation:
Sum of integers in the array is 6.
since 6 ≤ 3*2, therefore 2 is the answer.
Example 2:

Input:
N = 1,
A = { 3 }
Output:
3
Explanation:
3 is the only possible answer
Your Task:
The task is to complete the function minimumInteger() which takes an integer N and an integer array A as input parameters and returns the minimum integer which satisfies the condition.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤  N ≤ 105
1 ≤  Ai ≤ 109
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int minimumInteger(int n, vector<int> &arr) {
        long long sum = 0;
        for(int i : arr) sum+=i;
        int ans = INT_MAX;
        for(int i : arr) if(sum <= (long long)n*i) ans=min(ans, i);
        
        return ans;
    }
};