/*
Maximum subset sum
MediumAccuracy: 62.82%Submissions: 5K+Points: 4
Finding a high paying job is easier than today's problem! Attend Job Fair 2023
 

Given an array A of size N. Find the maximum subset-sum of elements that you can make from the given array such that for every two consecutive elements in the array, at least one of the elements is present in our subset. 

Example 1:

Input: 
N = 4
A[] = {1, -1, 3, 4}
Output: 8
Explanation: 
We can choose 0th,2nd & 3rd index(0 based 
Index),so that it can satisfy the 
condition & can make maximum sum 8. 
Example 2:

Input: 
N = 3
A[] =  {0, 2, 0};
Output: 2
Explanation: 
We can choose 1st index. Here the 
maximum possible sum is 2.
Your task:

You don't have to read input or print anything. Your task is to complete the function findMaxSubsetSum() which takes the array A and its size N as input and returns the Maximum possible subset-sum.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
2 ≤ N ≤ 105
-105 ≤ A[i] ≤ 105
*/

/*
class Solution {
public:
    int func(vector<int>& nums, int op, int mask, vector<int>& dp, vector<vector<int>>& gcd){
        int m = nums.size(), n = nums.size()/2;
        if(op > n) return 0;
        if(dp[mask] != -1) return dp[mask];

        for(int i=0;i<m;i++){
            if( (mask & (1<<i)) ) continue;
            for(int j=i+1;j<m;j++){
                if( (mask & (1<<j)) ) continue;
                
                int newMask = (1<<i) | (1<<j) | mask;
                int score = op * gcd[i][j] + func(nums, op+1, newMask, dp, gcd);
                dp[mask] = max(dp[mask], score);
            }
        }
        return dp[mask];
    }

    int maxScore(vector<int>& nums) {
        vector<int> dp(1<<14, -1);

        int m = nums.size(), n = nums.size()/2;
        vector<vector<int>> gcd(m, vector<int>(m, 0));
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                gcd[i][j] = __gcd(nums[i], nums[j]);
            }
        }

        return func(nums, 1, 0, dp, gcd);
    }
};
*/