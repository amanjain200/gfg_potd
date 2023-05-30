/*
Word Search
MediumAccuracy: 32.69%Submissions: 28K+Points: 4
Given a 2D board of letters and a word. Check if the word exists in the board. The word can be constructed from letters of adjacent cells only. ie - horizontal or vertical neighbors. The same letter cell can not be used more than once.

Example 1:

Input: board = {{a,g,b,c},{q,e,e,l},{g,b,k,s}},
word = "geeks"
Output: 1
Explanation: The board is-
a g b c
q e e l
g b k s
The letters which are used to make the
"geeks" are colored.
Example 2:

Input: board = {{a,b,c,e},{s,f,c,s},{a,d,e,e}},
word = "sabfs"
Output: 0
Explanation: The board is-
a b c e
s f c s
a d e e
Same letter can not be used twice hence ans is 0
Your Task:
You don't need to read or print anything. Your task is to complete the function isWordExist() which takes board and word as input parameter and returns boolean value true if word can be found otherwise returns false.

Expected Time Complexity: O(N * M * 4L) where N = No. of rows in board, M = No. of columns in board, L = Length of word
Expected Space Compelxity: O(L), L is length of word.

Constraints:
1 ≤ N, M ≤ 100
1 ≤ L ≤ N*M

*/

/*
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    bool dfs(vector<int> index, vector<vector<char>> &board, string word, int position, vector<vector<bool>> &vis ){          
        //base case
        if(position == word.size()){
            return true;
        }
        
        //recursive calls
        int nrow = board.size();
        int ncol = board[0].size();
        
        int r = index[0];
        int c = index[1];
        
        vis[r][c] = true;
        
        vector<int> dx = {0, 0, 1, -1};
        vector<int> dy = {1, -1, 0, 0};
        
        for(int i=0; i<4; i++){
            int row = r + dx[i];
            int col = c + dy[i];
            if(row>=0 && row<nrow && col>=0 && col<ncol){
                if(board[row][col]==word[position] && !vis[row][col]){
                    if(dfs({row, col}, board, word, position+1, vis) == true){
                        return true;
                    }
                    //backtracking
                    vis[row][col] = false;
                }
            }
        }
        
        return false;
        
    }
public:
    bool isWordExist(vector<vector<char>>& board, string word) {
        //find the index of the first character
        vector<int> index;
        bool done = false;
        int row = board.size();
        int col = board[0].size();
        vector<vector<bool>> visited(row, vector<bool>(col, false));
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(board[i][j]==word[0]){
                    //call dfs function form here
                    if(dfs({i, j}, board, word, 1, visited) == true){
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends

*/

