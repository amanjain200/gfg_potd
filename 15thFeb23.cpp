/*
Geeks Island
MediumAccuracy: 78.37%Submissions: 2K+Points: 4
Lamp
You can earn more Geekbits by participating in GFG Weekly Coding Contest  

Geeks Island is represented by an N * M matrix mat. The island is touched by the Indian Ocean from the top and left edges and the Arabian Sea from the right and bottom edges. Each element of the matrix represents the height of the cell.

Due to the rainy season, the island receives a lot of rainfall, and the water can flow in four directions(up, down, left, or right) from one cell to another one with height equal or lower.

You need to find the number of cells from where water can flow to both the Indian Ocean and the Arabian Sea.

Example 1:

Input:
N = 5, M = 5
mat[][] =    {{1, 3, 3, 2, 4},
               {4, 5, 6, 4, 4},
               {2, 4, 5, 3, 1},
               {6, 7, 1, 4, 5},
               {6, 1, 1, 3, 4}}
Output:
8
Explanation:
Indian    ~   ~   ~   ~   ~
Ocean  ~  1   3   3   2  (4) *
        ~  4   5  (6) (4) (4) *
        ~  2   4  (5)  3   1  *
        ~ (6) (7)  1   4   5  *
        ~ (6)  1   1   3   4  *           
           *   *   *   *   * Arabian Sea
Water can flow to both ocean and sea from the cells
denoted by parantheses().For example at index(1,2), the height of that island is 6. If a water drop falls on that island, water can flow to up direction(as 3<=6) and reach to Indian Ocean. ALso, water can flow to right direction(as 6>=4>=4) and reach to Arabian Sea.
Example 2:

Input:
N = 3, M = 2
mat[][] =    {{1, 1, 1},
               {1, 1, 1}}
Output:
6 
Explanation:
Water can flow from all cells to both Indian Ocean and Arabian Sea as the height of all islands are same.
Your Task:

Your task is to complete the function water_flow() which takes an integer array mat, integer N and integer M as the input parameter and returns an integer, denoting the number of cells from which water can to both ocean and sea.

Expected Time Complexity : O(N*M)
Expected Auxiliary Space : O(N*M)

Constraints:

1 <= N, M <= 103
1 <= mat[i][j] <= 106
*/

#include<iostream>
#include<vector>
using namespace std;

//User function Template for C++

class Solution{   
public:
    void helper(int x, int y, vector<vector<int>>& vis, vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vis[x][y] = 1;
        vector<int> dx = {-1, 0, +1, 0};
        vector<int> dy = {0, -1, 0, +1};
        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx>=0 && nx<n && ny>=0 && ny<m) {
                if(vis[nx][ny]==0 && mat[nx][ny]>=mat[x][y]) {
                    helper(nx, ny, vis, mat);
                }
            }
        }
    }

    int water_flow(vector<vector<int>> &mat,int N,int M){
    // Write your code here.
        vector<vector<int>> vis1(N, vector<int>(M));
        vector<vector<int>> vis2(N, vector<int>(M));
        for(int j=0; j<M; j++) {
            if(vis1[0][j]==0) {
                helper(0, j, vis1, mat);
            }
            if(vis2[N-1][j]==0) {
                helper(N-1, j, vis2, mat);
            }
        }
        for(int i=0; i<N; i++) {
            if(vis1[i][0]==0) {
                helper(i, 0, vis1, mat);
            }
            if(vis2[i][M-1]==0) {
                helper(i, M-1, vis2, mat);
            }
        }
        int ans = 0;
        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) {
                if(vis1[i][j] && vis2[i][j]) {
                    ++ans;
                }
            }
        }
        return ans;
    
    }
};
