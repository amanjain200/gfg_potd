/*
63. Unique Paths II
Medium
7.7K
460
Companies

You are given an m x n integer array grid. There is a robot initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.

An obstacle and space are marked as 1 or 0 respectively in grid. A path that the robot takes cannot include any square that is an obstacle.

Return the number of possible unique paths that the robot can take to reach the bottom-right corner.

The testcases are generated so that the answer will be less than or equal to 2 * 109.

 

Example 1:

Input: obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
Output: 2
Explanation: There is one obstacle in the middle of the 3x3 grid above.
There are two ways to reach the bottom-right corner:
1. Right -> Right -> Down -> Down
2. Down -> Down -> Right -> Right

Example 2:

Input: obstacleGrid = [[0,1],[0,0]]
Output: 1

 

Constraints:

    m == obstacleGrid.length
    n == obstacleGrid[i].length
    1 <= m, n <= 100
    obstacleGrid[i][j] is 0 or 1.


*/
/*
class Solution {
    
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if(obstacleGrid[m-1][n-1] == 1) return 0;

        vector<vector<long long>> dp(m, vector<long long>(n, 0));

        //base cases
        int val = 1;
        for(int i=m-1; i>=0; i--){
            if(obstacleGrid[i][n-1] == 1) val = 0;
            dp[i][n-1] = val;
        }
        val = 1;
        for(int i=n-1; i>=0; i--){
            if(obstacleGrid[m-1][i] == 1) val = 0;
            dp[m-1][i] = val;
        }

        //filling the table iteratively
        for(int i=m-2; i>=0; i--){
            for(int j=n-2; j>=0; j--){
                if(obstacleGrid[i][j]==1) dp[i][j] = 0;
                else dp[i][j] = dp[i+1][j] + dp[i][j+1];
            }
        }


        return dp[0][0];


        //return func(0, 0, obstacleGrid, dp);
    }
};
*/