/*
Trace Path
EasyAccuracy: 53.02%Submissions: 5K+Points: 2
Applying for Jobs, Now Easier Than Today's Problem! Explore Now

There is a rectangular path for a Train to travel consisting of n rows and m columns. The train will start from one of the grid's cells and it will be given a command in the form of string s consisting of characters L, R, D, U. Find if it is possible to travel the train inside the grid only.
Note:
If the train is at position (i,j)
on taking 'L' it goes to (i,j-1),
on taking 'R' it goes to (i,j+1),
on taking 'D' it goes to (i-1,j),
on taking 'U' it goes to (i+1,j).

Example 1:

Input: 
n = 1, m = 1
s = "R"
Output: 0
Explaination: There is only one cell(1,1). So train can only start from (1,1). On taking right(R) train moves to (1,2), which is out of grid.
Therefore there is no cell from where train can start and remain inside the grid after tracing the route. 
Example 2:

Input: 
n = 2, m = 3
s = "LLRU"
Output: 1
Explaination: One possible cell is (1,3)
(1,3) --> (1,2) --> (1,1) --> (1,2) --> (2,2). Thus there is a cell from where if train starts, it remains inside the grid throughout tracing the route.
Your Task:
You do not need to read input or print anything. Your task is to complete the function isPossible() which takes n, m and s as input parameters and returns 1 if there is such a cell for which the train always remains inside the grid. Otherwise returns 0.

Expected Time Complexity: O(|s|)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ n, m ≤ 104
1 ≤ |s| ≤ 104   
*/

/*
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isPossible(int n, int m, string s){
        int maxleft=0;
        int maxright=0;
        int maxup=0;
        int maxdown=0;
        
        int hor=0, ver=0;
        
        //find the maximum movement in all the directions
        for(auto dir : s){
            if(dir == 'L'){
                hor--;
                maxleft = min(maxleft, hor);
            } 
            else if(dir == 'R'){
                hor++;
                maxright = max(maxright, hor);
            }
            else if(dir == 'D'){
                ver--;
                maxdown = min(maxdown, ver);
            }
            else if(dir == 'U'){
                ver++;
                maxup = max(maxup, ver);
            }
        }
        
        hor = maxright + abs(maxleft);
        ver = maxup + abs(maxdown);
        
        //check if these movement are possible in this structure
        if(n > ver && m > hor) return 1;
        
        return 0;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.isPossible(n, m, s)<<endl;
    }
    return 0;
}
// } Driver Code Ends
*/