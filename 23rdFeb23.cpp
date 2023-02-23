/*
Unique Paths in a Grid
EasyAccuracy: 50.47%Submissions: 11K+Points: 2
Lamp
Don't Miss Out on the Chance to Work with Leading Companies! Visit the GFG Job Fair Now!  

You are given a matrix grid of n x  m size consisting of values 0 and 1. A value of 1 means that you can enter that cell and 0 implies that entry to that cell is not allowed.

You start at the upper-left corner of the grid (1, 1) and you have to reach the bottom-right corner (n, m) such that you can only move in the right or down direction from every cell.

Your task is to calculate the total number of ways of reaching the target modulo (109+7).
Note: The first (1, 1) and last cell (n, m) of the grid can also be 0


Example 1:

Input:
n = 3, m = 3
grid[][] = {{1, 1, 1};
            {1, 0, 1};
            {1, 1, 1}}
Output:
2
Explanation:
1 1 1
1 0 1
1 1 1
This is one possible path.
1 1 1
1 0 1
1 1 1
This is another possible path.
Example 2:

Input:
n = 1, m = 3
grid = {{1, 0, 1}}
Output :
0
Explanation:
There is no possible path to reach the end.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function uniquePaths() which takes 2 integers n, and m, and a matrix of size n*m as input and returns the number of unique paths from cell (1,1) to (n,m) modulo (109+7)


Expected Time Complexity: O(n*m)
Expected Auxiliary Space: O(n*m)


Constraints:
1 ≤ n*m ≤ 106
*/

/*
//User function Template for C++

class Solution {
  public:
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
         vector<vector<int>> dp(n,vector<int> (m,0));

        int x=1e9+7;

        dp[0][0]=grid[0][0];

        for(int i=0;i<n;i++)

        {

            for(int j=0;j<m;j++)

            {

                if(grid[i][j]==1)

                {

                    if(i-1>=0)

                        dp[i][j]=(dp[i][j]+dp[i-1][j])%x;

                    if(j-1>=0)

                        dp[i][j]=(dp[i][j]+dp[i][j-1])%x;

                }

            }

        }

        return dp[n-1][m-1]%x;
    }
};

*/