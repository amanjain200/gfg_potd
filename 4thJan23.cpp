/*
Maximum Profit By Choosing A Subset Of Intervals

Given a list intervals of n intervals, the ith element [s, e, p] denotes the starting point s, ending point e, and the profit p earned by choosing the ith interval. Find the maximum profit one can achieve by choosing a subset of non-overlapping intervals.

Two intervals [s1, e1, p1] and [s2, e2, p2] are said to be non-overlapping if [e1 <= s2] and [s1 < s2].

Example 1:

Input:
n = 3
intervals = {
{1, 2, 4},
{1, 5, 7},
{2, 4, 4}
}
Output:
8
Explanation:
One can choose intervals [1, 2, 4] and [2, 4, 4] for a 
profit of 8.
*/

#include<iostream>
#include<vector>
using namespace std;


// User function Template for C++
class Solution {
  public:
  int dp[50001] = {};

    int depth(vector<vector<int>>& comb, int p, int last){

        if(p >= comb.size()) return 0; 

        if(comb[p][0] < last) return depth(comb, p+1, last); 

        if(dp[p] != -1) return dp[p]; 

        int ans = 0;

        ans = max(depth(comb, p+1, comb[p][1])+comb[p][2], depth(comb, p+1, 0));

        return dp[p] = ans;

    }
  
  
    int maximum_profit(int n, vector<vector<int>> &intervals) {
        sort(intervals.begin(),intervals.end());
        memset(dp, -1, sizeof dp);
        return depth(intervals, 0, 0);

    }
};



