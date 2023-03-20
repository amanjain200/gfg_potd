/*
Shortest XY distance in Grid
MediumAccuracy: 54.35%Submissions: 18K+Points: 4
Register NOW for the latest GFG Job-a-thon: Hiring Challenge !!  

Give a N*M grid of characters 'O', 'X', and 'Y'. Find the minimum Manhattan distance between a X and a Y.

Manhattan Distance :
| row_index_x - row_index_y | + | column_index_x - column_index_y |


Example 1:

Input:
N = 4, M = 4
grid  = {{X, O, O, O}
         {O, Y, O, Y}
         {X, X, O, O}
         {O, Y, O, O}}
Output:
1
Explanation:
{{X, O, O, O}
{O, Y, O, Y}
{X, X, O, O}
{O, Y, O, O}}
The shortest X-Y distance in the grid is 1.
One possible such X and Y are marked in bold
in the above grid.
Example 2:

Input:
N = 3, M = 3
grid = {{X, X, O}
        {O, O, Y}
        {Y, O, O}}
Output :
2
Explanation:
{{X, X, O}
 {O, O, Y}
 {Y, O, O}}
The shortest X-Y distance in the grid is 2.
One possible such X and Y are marked in bold
in the above grid.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function shortestXYDist() which takes two integers N, and M and an 2D list of size N*M as input and returns the shortest Manhattan Distance between a X and a Y.

Expected Time Complexity: O(N*M)
Expected Auxiliary Space: O(N*M)


Constraints:
1 ≤ N*M ≤ 105 

There exists at least one 'X' and at least one 'Y' in the grid.

 

View Bookmarked Problems 
Company Tags
Topic Tags
Related Interview Experiences
If you are facing any issue on this page. Please let us know.


*/


/*
// User function Template for C++

class Solution {
  public:
    int shortestXYDist(vector<vector<char>> grid, int N, int M) {
        int dist[N][M];
        for(int i=0;i<N;++i){
            for(int j=0;j<M;++j){
                 dist[i][j]=1e9;
            }
        }
        for(int i=0;i<N;++i){
            for(int j=0;j<M;++j){
                if(grid[i][j]=='X')
                    dist[i][j]=0;
                else{
                   if(i>0) dist[i][j]=min(dist[i][j],dist[i-1][j]+1);
                   if(j>0) dist[i][j]=min(dist[i][j],dist[i][j-1]+1); 
                }
            }
        }
        for(int i=N-1;i>=0;--i){
            for(int j=M-1;j>=0;--j){
                if(grid[i][j]=='X')
                    dist[i][j]=0;
                else{
                   if(i<N-1) dist[i][j]=min(dist[i][j],dist[i+1][j]+1);
                   if(j<M-1) dist[i][j]=min(dist[i][j],dist[i][j+1]+1); 
                }
            }
        }
        int ans =1e9;
        for(int i=0;i<N;++i){
             for(int j=0;j<M;++j){
                 if(grid[i][j]=='Y') ans =min(ans,dist[i][j]);
             }
        }
        return ans;
    }
};

*/