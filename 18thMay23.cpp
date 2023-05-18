/*
Find number of closed islands
HardAccuracy: 57.36%Submissions: 3K+Points: 8
Applying for Jobs, Now Easier Than Today's Problem! Explore Now

Given a binary matrix mat[][] of dimensions NxM such that 1 denotes land and 0 denotes water. Find the number of closed islands in the given matrix.

Note: A closed island is a group of 1s surrounded by only 0s on all the boundaries (except diagonals). In simple words, a closed island is an island whose none of the 1s lie on the edges of the matrix.

Example 1:

Input:
N = 5, M = 8
mat[][] = {{0, 0, 0, 0, 0, 0, 0, 1}, 
           {0, 1, 1, 1, 1, 0, 0, 1}, 
           {0, 1, 0, 1, 0, 0, 0, 1}, 
           {0, 1, 1, 1, 1, 0, 1, 0}, 
           {1, 0, 0, 0, 0, 1, 0, 1}}
Output:
2
Explanation:
mat[][] = {{0, 0, 0, 0, 0, 0, 0, 1}, 
           {0, 1, 1, 1, 1, 0, 0, 1}, 
           {0, 1, 0, 1, 0, 0, 0, 1}, 
           {0, 1, 1, 1, 1, 0, 1, 0}, 
           {1, 0, 0, 0, 0, 1, 0, 1}} 
There are 2 closed islands. The islands in dark are closed because they are completely surrounded by 0s (water). There are two more islands in the last column of the matrix, but they are not completely surrounded by 0s. Hence they are not closed islands. 
Example 2:

Input:
N = 3, M = 3
mat[][] = {{1, 0, 0},
           {0, 1, 0},
           {0, 0, 1}}
Output: 
1
Explanation:
mat[][] = {{1, 0, 0},
          {0, 1, 0},
          {0, 0, 1}}
There is just a one closed island.
Your task:
You dont need to read input or print anything. Your task is to complete the function closedIslands() which takes two integers N and M, and a 2D binary matrix mat as input parameters and returns the number of closed islands.

Expected Time Complexity: O(N*M)
Expected Auxiliary Space: O(N*M)

Constraints:
1 ≤ N,M ≤ 500
*/

/*
//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    void dfs(vector<vector<int>>& matrix, int r, int c) {
        if (r < 0 || r == matrix.size() || c < 0 || c == matrix[0].size() || matrix[r][c] == 0) return;
        matrix[r][c] = 0;
        dfs(matrix, r + 1, c);
        dfs(matrix, r - 1, c);
        dfs(matrix, r, c + 1);
        dfs(matrix, r, c - 1);
    }
    
    int closedIslands(vector<vector<int>>& matrix, int N, int M) {
        for(int r = 0; r < N; r++) {
            for(int c = 0; c < M; c++) {
                if (r == 0 || r == N - 1 || c == 0 || c == M - 1) {
                    dfs(matrix, r, c);
                }
            }    
        }     
        int res = 0;
        for(int r = 0; r < N; r++) {
            for(int c = 0; c < M; c++) {
                if (matrix[r][c] == 1) {
                    res++;
                    dfs(matrix, r, c);
                }
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int N, M;
        cin >> N >> M;
        vector<vector<int>>matrix(N, vector<int>(M, 0));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                cin >> matrix[i][j];
                
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << "\n";
    }
	
	return 0;
	
}


// } Driver Code Ends

*/