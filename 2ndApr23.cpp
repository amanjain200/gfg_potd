/*
Knight in Geekland
MediumAccuracy: 82.95%Submissions: 2K+Points: 4
Attend free LIVE Webinars with Summer Skill-Up Sessions! Enroll Now!  

Knight is at (start_x,start_y) in Geekland which is represented by an NxM 2D matrix.
Each cell in the matrix contains some points. In the ith step, the knight can collect all the points from all the cells that can be visited in exactly i steps without revisiting any cell.
Also, the knight has some magical powers that enable him to fetch coins from the future i.e. If the knight can collect y coins in the xth step he can fetch all the coins that he will collect in the (x + y)th step and if the knight can collect z coins in the yth step he can fetch all the coins that he will collect in the (y + z)th step and so on without increasing the step count i.e. knight will stay on xth step and will get all the coins of the future steps mentioned above((x + y)th step coins + (y+z)th steps + ...).
Find the minimum number of steps required to collect the maximum points.
Note: The knight moves exactly the same as the knight on a chess board. Please follow 0 indexing.

Example 1:

Input:
n = 9
m = 10
start_x = 4, start_y = 5
arr =
0 0 0 2 0 2 0 2 0 0
0 0 2 0 2 0 2 0 2 0
0 2 0 0 1 2 0 0 0 2
0 0 2 0 2 0 2 0 2 0
0 2 0 2 0 0 0 2 0 2
0 0 2 0 2 0 2 0 2 0
0 2 0 0 0 2 0 0 0 2
0 0 2 0 2 0 2 0 2 0
0 0 0 2 0 2 0 2 0 0
Output: 1
Explanation: minimum knight have to take 1 steps to gain maximum points.
Initially, the knight has 0 coins, he will take 1 step to collect 1 point (sum of cells denoted in red color).
Now in the second step, he can collect points from all the cells colored green i.e. 64 points.
But with his magical power, at the 1st step, he can fetch points from the (1 + 1)th step. Therefore he can collect 1 + 64 coins at step 1 only. Hence answer is 1.
Example 2:

Input:
n = 3 
m = 3
start_x = 2, start_y = 1
arr =
7 6 8
9 1 4
6 2 8
Output:0
Explanation:
Initially, the knight has 2 points, or more formally we can say that at the 0th step knight has 2 points.
In the first step, he can collect points from cells (0, 0) and (0, 2) i.e. 15 points.
In the second step, he can collect points from cells (1, 0) and (1, 2) i.e. 13 coins.
In the third step, he can collect points from cells (2, 0) and (2, 2) i.e. 14 points.
In the fourth step, he can collect points from the cell (0, 1) i.e. 6 points.
So in each step, he can collect coins like -You can see in the below image  Knight can collect 15 coins in the 0th step only

Your Task:
You don't need to read input or print anything. Your task is to complete the function knightInGeekland() which takes 2-d array arr[][], starting coordinates of knight start_x, and start_y as input, and return an integer value as min steps to gain max points.

Expected Time Complexity: O(N*M)
Expected Auxiliary Space: O(N*M)

Constraints:
   1 <= len(arr), len(arr[0]) < 103
   0 <= values in arr <=100

*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;


//{ Driver Code Starts
//Initial Template for C++


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int knightInGeekland(int start_x,int start_y,vector<vector<int>> &arr){
        int m = arr.size();
        int n = arr[0].size();
        
        queue<pair<int, int>> q;
        q.push({start_x, start_y});
        
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        vis[start_x][start_y] = true;
        
        vector<int> coins;
        
        int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
        int dy[8] = {-1, 1, -2, 2, 2, -2, 1, -1};
        
        while(!q.empty())
        {
            
            int size = q.size();
            int coinsInThisStep = 0;
            while(size--)
            {
                auto node = q.front();
                q.pop();
                
                int currX = node.first;
                int currY = node.second;
                
                coinsInThisStep += arr[currX][currY];
                
                for(int dir=0; dir<8; dir++)
                {
                    int newX = currX + dx[dir];
                    int newY = currY + dy[dir];

                    if(newX >= 0 && newY >= 0 && newX < m && newY < n && !vis[newX][newY])
                    {
                        
                        vis[newX][newY] = true;
                        q.push({newX, newY});
                    }
                    
                }
                
            }
            
            coins.push_back(coinsInThisStep);
            
        }
        
        int size = coins.size();
        int maxi=INT_MIN;
        int ans;
        for(int i=size-1; i>=0; i--)
        {
            if(coins[i] + i < size)
            {
                coins[i] += coins[coins[i] + i];
            }
            if(coins[i] >= maxi)
            {
                maxi = coins[i];
                ans = i;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,start_x,start_y;
        cin>>n>>m>>start_x>>start_y;
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        Solution ob;
        cout<<ob.knightInGeekland(start_x,start_y,arr)<<endl;
    }
}
// } Driver Code Ends